/*A+B Problem*/
#include "stdio.h"

int main(int argc, char const *argv[])
{
    long long num, a, b, h;
    scanf("%d\n", &num);
    while (num-- > 0)
    {
        scanf("%d%d", &a, &b);
        h = a + b;
        printf("%d\n", h );
    }
    return 0;
}