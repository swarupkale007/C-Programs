#include <stdio.h>

int main()
{
    int num, temp, digit;
    int sum, count, power, i;

    printf("Armstrong numbers between 1 and 1000:\n");

    for (num = 1; num <= 1000; num++)
    {
        temp = num;
        count = 0;

        while (temp != 0)
        {
            count++;
            temp /= 10;
        }

        temp = num;
        sum = 0;

        while (temp != 0)
        {
            digit = temp % 10;
            power = 1;

            for (i = 1; i <= count; i++)
            {
                power *= digit;
            }

            sum += power;
            temp /= 10;
        }

        if (sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}
