#include<stdio.h>
// #include<stdlib.h>
#include<conio.h>
void main()
{
    /* code */
    int n, i;
    printf("Enter the value for N:\n");
    scanf("%d", &n);
    printf("Leap years from 1 to %d are:\n", n);
    for (int i = 0; i <= n; i++)
    {
        /* code */
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
        {
            /* code */
            printf("%d\t", i);
        }    
    }
}