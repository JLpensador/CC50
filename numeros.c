#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int numeros[] = {4,6,8,2,7,5,0};
    for(int i = 0; i < 7; i++)
    {
        if(numeros[i] == 3)
        {
            printf("encontrado\n");
            return 0;
        }
    }
    printf("nao encontrado\n");
    return 1;
}