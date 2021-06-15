#include <stdio.h>
int main()
{
   int n, rem, a[100], i = 0, j;
   printf("Enter number: \n");
   scanf("%d", &n);
   printf("Binary conversion of %d is: ", n);
   if (n == 0)
   {
      /* code */
      a[j] = 0;
      printf("%d", a[j]);
   }
   else
   {
      /* code */
      while (n)
      {
         rem = n % 2;
         n = n / 2;
         a[i] = rem;
         i++;
      }
      for (int j = i - 1; j >= 0; j--)
      {
         printf("%d", a[j]);
      }
   }
   return 0;
}