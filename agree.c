#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("você concorda?\n");

    if (c == 's' || c == 'S')
    {
        printf("você concordou\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("você discordou\n");
    }
    else
    printf("não entendi, por favor insira o código novamente\n");
}
