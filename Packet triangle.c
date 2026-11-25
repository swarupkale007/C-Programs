#include <stdio.h>

int main()
{
    int n = 6;
    int i, j, space, num;

    for (i = 0; i < n; i++)
    {
        for (space = 1; space <= n - i; space++)
        {
            printf(" ");
        }

        num = 1;

        for (j = 0; j <= i; j++)
        {
            printf("%4d", num);

            num = num * (i - j) / (j + 1);
        }

        printf("\n");
    }

    return 0;
}
