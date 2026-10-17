#include <stdio.h>

int main()
{
    float a, b, c, total, percentage;

    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &a, &b, &c);

    total = a + b + c;
    percentage = total / 3;

    printf("Total Marks = %f\n", total);
    printf("Percentage = %f", percentage);

    return 0;
}
