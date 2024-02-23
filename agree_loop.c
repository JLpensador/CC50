#include <cs50.h>
#include <stdio.h>

int main(void) {

  int tentativas_maximas = 3;

  for (int tentativas = 1; tentativas <= tentativas_maximas; tentativas++)
  {
    char c = get_char("você concorda?\n");

    if (c == 's' || c == 'S')
    {
      printf("concordou\n");
      break;
    }

    else if (c == 'n' || c == 'N')
            {
      printf("você discordou\n");
      break;
            }

        if(tentativas < tentativas_maximas)
        {
            printf("tentativas %i de %i\n", tentativas, tentativas_maximas);
        }
  }
return 0;
}
