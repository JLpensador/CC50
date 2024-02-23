#include <cs50.h>
#include <stdio.h>

int main(void) {

  int primeiro = get_int("digite um numero");
  int segundo = get_int("outro numero");

  if (primeiro > segundo) {
    printf("%i é maior do que %i\n", primeiro, segundo);
  } else if (primeiro < segundo) {
    printf("%i é menor do que %i\n", primeiro, segundo);
  } else
    printf("%i é igual a %i\n", primeiro, segundo);
}
