#include <stdio.h>

int main()
{
    float km, metres;

    printf("Enter distance in kilometres: ");
    scanf("%f", &km);

    metres = km * 1000;

    printf("Distance in metres = %.2f", metres);
    return 0;
}
