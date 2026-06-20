#include "filecommand.h"

static int getCommand (const char * path);

void checkCommand (void) {
    if (1 == getCommand ("/buildAll/tst1")) {
        console_print ("[MD] tst1!!\n");
    } else if (1 == getCommand ("/buildAll/tst2")) {
        console_print ("[MD] tst2!!\n");
    } else {
        /*noop*/
    }
}

static int getCommand (const char * path) {
    assert (path != NULL);
    assert (0 != strcmp(path, ""));

    struct stat st;
    int ret;
    if (stat (path, &st) == 0) {
        ret = 1;
        remove (path);
    } else {
        ret = 0;
    }
    return ret;
}