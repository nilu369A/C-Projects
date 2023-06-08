#include <stdio.h>

int main()
{

    int choice;
    float c, f, k, r;
    printf("\nMenu\n");
    printf("\n1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("3. Celsius to Kelvin\n");
    printf("4. Kelvin to Celsius\n");
    printf("5. Fahrenheit to Rankine\n");
    printf("6. Rankine to Fahrenheit\n");
    printf("7. Fahrenheit to Kelvin\n");
    printf("8. Kelvin to Fahrenheit\n");
    printf("9. Celsius to Rankine\n");
    printf("10. Rankine to Celsius\n");
    printf("11. Exit");

    do
    {
        printf("\nEnter your choice : ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nEnter temperature : ");
            scanf("%f", &c);
            f = (c * 9 / 5) + 32;
            printf("%.2f Celsius = %.2f Fahrenheit\n", c, f);
        }
        else if (choice == 2)
        {
            printf("\nEnter temperature : ");
            scanf("%f", &f);
            c = (f - 32) * 5 / 9;
            printf("%.2f Fahrenheit = %.2f Celsius\n", f, c);
        }
        else if (choice == 3)
        {
            printf("\nEnter temperature : ");
            scanf("%f", &c);
            k = c + 273.15;
            printf("%.2f Celsius = %.2f Kelvin\n", c, k);
        }
        else if (choice == 4)
        {
            printf("\nEnter temperature : ");
            scanf("%f", &k);
            c = k - 273.15;
            printf("%.2f Kelvin = %.2f Celsius\n", k, c);
        }
        else if (choice == 5)
        {
            printf("\nEnter temperature : ");
            scanf("%f", &f);
            r = f + 459.67;
            printf("%.2f Fahrenheit = %.2f Rankine\n", f, r);
        }
        else if (choice == 6)
        {
            printf("\nEnter temperature : ");
            scanf("%f", &r);
            f = r - 459.67;
            printf("%.2f Rankine = %.2f Fahrenhite\n", r, f);
        }
        else if (choice == 7)
        {
            printf("\nEnter temperature : \n");
            scanf("%f", &f);
            k = (f + 459.67) * 5 / 9;
            printf("%.2f Fahrenheit = %.2f kelvin\n", f, k);
        }
        else if (choice == 8)
        {
            printf("\nEnter temperature : \n");
            scanf("%f", &k);
            f = (k * 9 / 5) - 459.67;
            printf("%.2f kelvin = %.2f Fahrenheit\n", k, f);
        }
        else if (choice == 9)
        {
            printf("\nEnter temperature : ");
            scanf("%f", &c);
            r = (c + 273.15) * 9 / 5;
            printf("%.2f Celsius = %.2f Rankine\n", c, r);
        }
        else if (choice == 10)
        {
            printf("\nEnter temperature : ");
            scanf("%f", &r);
            c = (r - 491.67) * 5 / 9;
            printf("%.2f Rankine = %.2f Celsius\n", r, c);
        }
        else if (choice == 11)
        {
            printf("Exit!");
        }
        else
        {
            printf("Enter a valid option!\n");
        }
    } while (choice != 11);
    return 0;
}