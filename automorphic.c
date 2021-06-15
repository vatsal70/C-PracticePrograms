#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    int sqr = num * num;
    int flag = 0;
    printf("\nNumber: %d\n", num);
    printf("Square: %d\n", sqr);
   while(num > 0)
   {
       if(num % 10 != sqr % 10)
         {
             flag = -1;
             break;
         }
       /* printf("Num %d\n", num); */
       num = num / 10;
       /* printf("\n num %d\n", num); */
       sqr = sqr / 10;
       /* printf("sqr %d\n", sqr); */
   }
   if(flag == 0)
    printf("It is an Automorphic Number");
   else
    printf("It is not an Automorphic Number");
}