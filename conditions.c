#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int x = get_int("x: \n");
    int y = get_int("y: \n");

    if (x < y)
    {
        printf("%i é menor que %i\n", x, y);
    }
    else if (x > y)
    {
        printf("%i é maior que %i\n", x, y);
    }
    else
    printf("%i é igual a %i\n", x ,y);
}
