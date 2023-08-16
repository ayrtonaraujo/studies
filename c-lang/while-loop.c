#include <stdio.h>

int main ()
{
    int number_1, number_2, quantity = 0;
    int current_number = number_1;

    printf ("N1: ");
    scanf ("%d", &number_1);

    printf ("N1: ");
    scanf ("%d", &number_2);

    while (current_number <= number_2)
    {
        if (current_number % 2 == 0)
        {
            printf ("%d\t", current_number);
            quantity++;
        }

        current_number++;

    }

    printf ("\n\nQuantity: %d", quantity);




    return 0;
}