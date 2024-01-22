#include <stdio.h>

int func(int n)
{
    if (n <= 0)
        return 0;
    else if (n == 1)
        return 0;
    else if (n == 2)
        return 1;
    else if (n == 3)
        return 2;
    return func(n - 3) + func(n - 2) + func(n - 1);
}


int main()
{
    printf("%d", func(8));
}
