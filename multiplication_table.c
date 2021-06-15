// Can print the multiplication tables only of 1 to 20 without user input
#include<stdio.h>
int main()
{
    int num = 1, i;
    while (num < 21)
    {
        /* code */
        printf("\n\nThe multiplication table of %d is: \n", num);
        for (int i = 0; i < 10 ; i++)
        {
        /* code */
        printf("%d X %d = %d\n", num, i+1, (i+1)*num);
        }
        num++;
    }
    return 0;
}


// To take input from user and can print table of N number(one at a time).
// #include<stdio.h>
// int main()
// {
//     /* code */
//     int num;
//     printf("Enter number from to print it's multiplication number: \n");
//     scanf("%d", &num);
//     printf("\n\nThe multiplication table of %d is: \n", num);
//     for (int i = 0; i < 10 ; i++)
//     {
//         /* code */
//         printf("%d X %d = %d\n", num, i+1, (i+1)*num);
//     }
//     return 0;
// }



// Can take the user input for the number upto which the tables is to be printed.
// #include<stdio.h>
// int main()
// {
//     int num = 1, i, endnum;
//     printf("Enter the number upto which you want to print the tables: \n");
//     scanf("%d", &endnum);
//     while (num < (endnum+1))
//     {
//         /* code */
//         printf("\n\nThe multiplication table of %d is: \n", num);
//         for (int i = 0; i < 10 ; i++)
//         {
//         /* code */
//         printf("%d X %d = %d\n", num, i+1, (i+1)*num);
//         }
//         num++;
//     }
//     return 0;
// }