#include "mcud_exec.h"

run_fn_t main_fn;

static void run_v1 (void);
static void run_v2 (void);
static void run_v3 (void);

static void run_v1 (void) {
    for ( ; ; ) {
        console_print ("[MD] running...V1\n");
        sleep(1);
    }
}

static void run_v2 (void) {
    for ( ; ; ) {
        console_print ("[MD] running...V2\n");
        sleep (1);
    }
}

static void run_v3 (void) {
    for ( ; ; ) {
        console_print ("[MD] running...V3\n");
        checkCommand ();
        sleep (1);
    }
}

void mcud_exec_init (void) {
    if (0U == MCUD_APP_VERSION[1U]) {
        main_fn = run_v1;
    } else if (1U == MCUD_APP_VERSION[1U]) {
        main_fn = run_v2;
    } else if (2U == MCUD_APP_VERSION[1U]) {
        main_fn = run_v3;
    } else {
        main_fn = run_v1;
    }
}