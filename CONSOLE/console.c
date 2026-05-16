#include "console.h"
#include "version.h"

void (*console_init)(void);
void (*console_print)(const char * param);

static void console_init_v1(void);
static void console_init_v2(void);
static void console_print_v1(const char * param);

static void console_init_v1(void)
{
    freopen("/dev/console", "w", stdout);
    freopen("/dev/console", "w", stderr);
    console_print("[MD] Start mcud\n");
}

static void console_init_v2(void)
{
    console_print("[MD] Start mcud\n");
}

static void console_print_v1(const char * param)
{
    if(NULL == param)
    {
        printf("[ERROR][CONSOLE][console_print] NULL");
    }
    else
    {
        printf("%s", param);
    }
}

void console_fn_init(void)
{
    if(0U == MCUD_APP_VERSION[0U])
    {
        console_init = console_init_v2;
        console_print = console_print_v1;
    }
    else
    {
        console_init = console_init_v2;
        console_print = console_print_v1;
    }
}