#ifndef MCUD_EXEC_H
#define MCUD_EXEC_H

#include "version.h"
#include "CONSOLE/console.h"
#include "FILECOMMAND/filecommand.h"

typedef void (*run_fn_t) (void);
extern run_fn_t main_fn;
extern void mcud_exec_init (void);

#endif