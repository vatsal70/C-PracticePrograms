#include<stdio.h>
int main()
{
    /* code */
    int a, b;
    printf("Enter the value for variable a:\n");
    scanf("%d", &a);
    printf("Enter the value for variable b:\n");
    scanf("%d",&b);
    printf("Value of variable a = %d\n", a);
    printf("Value of variable b = %d\n\n", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("Variables after swapping:\n");
    printf("Value of variable a = %d\n", a);
    printf("Value of variable b = %d\n", b);
    return 0;
}