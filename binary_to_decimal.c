// #include <stdio.h>

// void main()
// {
//     int  num, binary_val, decimal_val = 0, base = 1, rem;

//     printf("Enter a binary number(1s and 0s) \n");
//     scanf("%d", &num); /* maximum five digits */
//     binary_val = num;
//     while (num > 0)
//     {
//         rem = num % 10;
//         decimal_val = decimal_val + rem * base;
//         num = num / 10 ;
//         base = base * 2;
//     }
//     printf("The Binary number is = %d \n", binary_val);
//     printf("Its decimal equivalent is = %d \n", decimal_val);
// }

#include <stdio.h>
#include <math.h>
void main()
{
    int num, original_num;
    int decimal = 0, i = 0, remainder;
    printf("\n\nConvert Binary to Decimal:\n ");
    printf("-------------------------\n");
    printf("Input  the binary number (1's and 0's only) :");
    scanf("%d", &original_num);

    /* printf("\n Number: %d\n", original_num); */

    num = original_num;

    /* printf("Before while the value of num: %d\n", num); */

    while (num > 0)
    {
        /* printf("In while loop the value of num: %d\n", num);  */

        remainder = num % 10;

        /* printf("Remainder: %d\n", remainder); */
        /* printf("Decimal: %d\n", decimal); */

        decimal = decimal + remainder * pow(2, i);

        /* printf("Decimal: %d\n", decimal); */
        /* printf("Number: %d\n", num); */

        num = num / 10;

        /* printf("Number: %d\n", num); */

        i++;
    }
    printf("\nThe Binary Number : %d\nThe Decimal  Number is : %d\n\n", original_num, decimal);
}