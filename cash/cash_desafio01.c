int darTroco(int troco);

int main(void)
{
    int valorTroco;

    printf("digite o valor do troco em centavos: ");
    scanf("%d", &valorTroco);

    darTroco(valorTroco);
}

int darTroco(int troco)
{
    int moedas25, moedas10, moedas5, moedas1;

    moedas25 = troco / 25;
    troco %= 25;

    moedas10 = troco / 10;
    troco%= 10;

    moedas5 = troco / 5;
    troco%= 5;

    moedas1 = troco / 1;
    troco%= 1;

    moedas1 = troco;

    printf("dar troco usando: \n");
    printf("%d moedas de 25  centavos\n", moedas25);
    printf("%d moedas de 10  centavos\n", moedas10);
    printf("%d moedas de 5  centavos\n", moedas5);
    printf("%d moedas de 1  centavos\n", moedas1);
}