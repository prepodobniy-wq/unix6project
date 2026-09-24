#include "kernel/types.h"
#include "user/user.h"

int
main(void)
{
    int r;

    r = admintest();
    if(r == 0)
        printf("admintest: access granted\n");
    else
        printf("admintest: access denied\n");
    exit(0);
}