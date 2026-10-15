#include <stdio.h>

int main()
{
    float p, r, t, interest;

    printf("Enter principal, rate and time: ");
    scanf("%f%f%f", &p, &r, &t);

    interest = (p * r * t) / 100;

    printf("Simple Interest = %.2f", interest);
    return 0;
}
