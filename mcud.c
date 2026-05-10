#include <stdio.h>
#include <unistd.h>

int main()
{
    freopen("/dev/console", "w", stdout); 
    freopen("/dev/console", "w", stderr);
    for(;;)
    {
        printf("[MD] live...\n");
        sleep(1);
    }
    return 0;
}