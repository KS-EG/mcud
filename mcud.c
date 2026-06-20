#include <stdio.h>
#include <unistd.h>

#include "mcud_exec.h"
#include "CONSOLE/console.h"

int main (void) {
    console_fn_init ();
    console_init ();
    mcud_exec_init ();
    main_fn ();
    return 0;
}