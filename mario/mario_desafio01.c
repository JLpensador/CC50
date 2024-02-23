#include <stdio.h>
#include <cs50.h>

int main(void)
{ 
    int altura;
    do
    {
        altura = get_int("escolha a altura: ");
    }
    while(altura < 1);
    for (int i = 0; i < altura; i++)
    {
        for (int j = 0; j < altura - i - 1; j++)
        {
            printf(" ");
        }

        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}