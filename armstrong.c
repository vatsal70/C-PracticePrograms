#include<stdio.h>

int main()
{
    /* code */
    int n, number, remainder, final_num = 0;
    printf("Enter 3-digit number to check if it is Armstrong's number or not.\n");
    scanf("%d", &n);
    number = n; /* copying the value of input 'n' in the variable 'number' */
    while (number != 0)
    {
        /* code */
        // printf("Number %d\n", number);
        remainder = number % 10; /* To find the remainder and store it in the remainder variable. */
        // printf("Remainder %d\n", remainder);
        final_num = final_num + remainder * remainder * remainder; /* store the summation of final_num and the cube of remainder in final_num.*/
        // printf(" final_num %d\n", final_num);
        number = number / 10;
        // printf("Number %d\n", number);
    }
    if (final_num == n)
    {
        /* code */
        printf("\n\n%d is Armstrong's number.\n", n);
    }
    else
    {
        /* code */
        printf("It is not Armstrong's number.\n");
    }
    return 0;
}