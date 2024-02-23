#include <stdio.h>
#include <cs50.h>

int main(void) {
    long long numeroCartao;

    // Solicita ao usuário o número do cartão de crédito
    numeroCartao = get_long("Digite o número do cartão de crédito: ");

    // Inicializa variáveis
    int soma = 0;
    int multiplicarPorDois = 0;
    int somaMultiplicacao = 0;
    int tamanho = 0;

    // Aplica o algoritmo de Luhn
    while (numeroCartao > 0) {
        int digito = numeroCartao % 10;
        
        // A cada segundo dígito, multiplicar por 2
        if (tamanho % 2 == 1) {
            multiplicarPorDois = digito * 2;
            
            // Se o resultado tem dois dígitos, soma os dígitos
            if (multiplicarPorDois >= 10) {
                somaMultiplicacao += multiplicarPorDois % 10 + multiplicarPorDois / 10;
            } else {
                somaMultiplicacao += multiplicarPorDois;
            }
        } else {
            // Soma os dígitos não multiplicados por 2
            soma += digito;
        }

        tamanho++;
        numeroCartao /= 10;
    }

    // Soma total
    int total = soma + somaMultiplicacao;

    // Verifica se o cartão é válido e identifica a bandeira
    if (total % 10 == 0) {
        if ((tamanho == 15 && (numeroCartao == 34 || numeroCartao == 37)) ||
            (tamanho == 16 && (numeroCartao >= 51 && numeroCartao <= 55)) ||
            ((tamanho == 13 || tamanho == 16) && (numeroCartao / 1000000000000 == 4))) {
            printf("VISA\n");
        } else if (tamanho == 16 && (numeroCartao >= 2221000000000000 && numeroCartao <= 2720999999999999)) {
            printf("MASTERCARD\n");
        } else if ((tamanho == 15 && (numeroCartao == 34 || numeroCartao == 37))) {
            printf("AMEX\n");
        } else {
            printf("INVALID\n");
        }
    } else {
        printf("INVALID\n");
    }

    return 0;
}