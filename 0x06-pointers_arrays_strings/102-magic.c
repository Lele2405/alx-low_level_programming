#include <stdio.h>

int main(void)
{
    int n;
    int a[5];
    int *p;

    a[2] = 1024;
    p = &n;

    *(p + 5) = 98;  /* Set the value of a[2] to 98 without using 'a' or modifying 'p' */

    printf("a[2] = %d\n", a[2]);
    return (0);
}

