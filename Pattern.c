#include <stdio.h>
int main()
{
    int i, j;
    int n = 10;
    int k = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 1; j <= n + i; j++)
        {
            if (j <= k)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
        k = k + 2;
    }
    k = k - 4;
    for (i = n - 2; i >= 0; i--)
    {
        for (j = 1; j <= n + i; j++)
        {
            if (j <= k)
                printf(" ");
            else
                printf("*");
        }
        printf("\n");
        k = k - 2;
    }
    return 0;
}
