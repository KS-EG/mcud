#include "console.h"

void console_init(void)
{
    freopen("/dev/console", "w", stdout); 
    freopen("/dev/console", "w", stderr);
    console_print("[MD] Start mcud\n");
}

void console_print(const char * param)
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