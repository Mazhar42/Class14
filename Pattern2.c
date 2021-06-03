#include <stdio.h>
int main()
{
    int i, j;
    int n = 11;
    int k = 0;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n; j++)
        {
            if (i - 1 == n / 2 || j - 1 == n / 2)
                printf("+ ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
