#ifndef CONSOLE_H
#define CONSOLE_H

#include <stdio.h>
#include <unistd.h>

// extern void console_init(void);
// extern void console_print(const char * param);

extern void (*console_init)(void);
extern void (*console_print)(const char * param);

extern void console_fn_init(void);

#endif