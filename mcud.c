#include <stdio.h>
#include <unistd.h>

#include "mcud_exec.h"

int main()
{
    mcud_exec_init();
    main_fn();
    return 0;
}