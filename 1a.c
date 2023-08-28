#include <stdio.h>
#include <math.h>
int primo(int n)
{
    if (n < 2)
    {
        return 0;
    }
    for (int x = 2; x <= sqrt(n); x++)
    {
        if (n % x == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    printf("%d", primo(1));
    return 0;
}