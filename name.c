#include <cs50.h>
#include <stdio.h>

int main(void) {
  string nome = get_string("qual seu nome?");
  printf("olá, %s\n", nome);
}
