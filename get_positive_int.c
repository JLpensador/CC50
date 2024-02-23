#include <stdio.h>
#include <cs50.h>

int get_positive_int(void);

int main(void)
{
    int i = get_positive_int();
    printf("%i\n");
}

int get_positive_int(void)
{
    int n;
    do
    {
        n = get_int("Número positivo: \n");
    }
        while(n < 1);
        return n;
}