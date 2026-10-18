#include <stdio.h>

int main()
{
int n, i, count = 0;

printf("Enter number of objects: ");  
scanf("%d", &n);  

for(i = 1; i <= n; i++)  
{  
    count++;  
    printf("Object %d detected\n", count);  
}  

printf("Total objects counted = %d", count);  

return 0;

}
