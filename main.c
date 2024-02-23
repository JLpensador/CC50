#include <stdio.h>
#include <stcs50.h>

int main(void) {
    char nome[50];
    
    puts("Qual e o teu nome?");
    scanf("%s", nome);

    printf("Ola, %s\n", nome);

    return 0;
}
