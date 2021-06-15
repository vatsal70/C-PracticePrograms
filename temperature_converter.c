#include<stdio.h>
int main()
{
    /* code */
    int n;
    float cel, far;
    printf("Temperature Converter\n");
    printf("Select the required conversion\n");
    printf("Press 1 for Celsius To Farenheit Converter\n");
    printf("Press 2 for Farenheit To Celsius Converter\n");
    printf("Press any other key to exit the program.\n");
    scanf("%d", &n);
    if (n == 1)
    {
        /* code */
        printf("Celsius To Farenheit Converter.\n");
        printf("Enter temperature here.\n");
        scanf("%f", &cel);
        far = (cel * 9/5) + 32;
        printf("%.2f Celsius = %.2f Farenheit", cel,far);
    }
    else if (n == 2)
    {
        /* code */
        printf("Farenheit To Celsius Converter.\n");
        printf("Enter temperature here.\n");
        scanf("%f", &far);
        cel = (far - 32) * 5/9;
        printf("%.2f farenheit = %.2f Celsius", far,cel);
    }
    else
    {
        printf("Exiting Program");
        return 0;
    }
    return 0;
}