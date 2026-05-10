#include "mcud_exec.h"

run_fn_t main_fn;

static void run_v1(void);
static void run_v2(void);

static void run_v1(void)
{
    CONSOLE_INIT();
    for(;;)
    {
        CONSOLE_PRINT("[MD] running...V1\n");
        sleep(1);
    }
}

static void run_v2(void)
{
    CONSOLE_INIT();
    for(;;)
    {
        CONSOLE_PRINT("[MD] running...V2\n");
        sleep(1);
    }
}

void mcud_exec_init(void)
{
    if(0U == APP_VERSION[0U])
    {
        main_fn = run_v1;
    }
    else if(1U == APP_VERSION[0U])
    {
        main_fn = run_v2;
    }
    else
    {
        main_fn = run_v1;
    }
}