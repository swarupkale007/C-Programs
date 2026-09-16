#include<stdio.h>

void main()
{
    char name[30];
    int rollno;
    char class_name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your class: ");
    scanf("%s", class_name);

    printf("Enter your roll number: ");
    scanf("%d", &rollno);

    printf("\nName = %s", name);
    printf("\nClass = %s", class_name);
    printf("\nRoll Number = %d", rollno);

    getch();
}
