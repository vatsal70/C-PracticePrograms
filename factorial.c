#include<stdio.h>
int factorial(int n){
    if (n == 0 || n == 1)
    {
        /* code */
        return 1;
    }
    else
    {
        /* code */
        return n * factorial(n-1);
    }
}
int main()
{
    /* code */
    int n;
    printf("Enter the number to find it's factorial: \n");
    scanf("%d", &n);
    int fact = factorial(n);
    printf("The factorial of %d is: %d", n, fact);
    return 0;
}