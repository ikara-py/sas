#include <stdio.h>
int main(){

    float amount, interet, interetInput, pay, intr;
    printf("\nEntrez le montant du prêt : ");
    scanf("%f", &amount);

    printf("\nEntrez le taux d'intérêt : ");
    scanf("%f", &interetInput);

    printf("\nEntrez le paiement mensuel : ");
    scanf("%f", &pay);

    interet = interetInput / 12;

    intr = (amount * interet)/ 100;
    amount = amount + intr ;
    amount = amount - pay;
    printf("\nSolde restant après le premier paiement : %.2f", amount);

    intr = (amount * interet)/ 100;
    amount = amount + intr ;
    amount = amount - pay;
    printf("\nSolde restant après le deuxième paiement : %.2f", amount);

    intr = (amount * interet)/ 100;
    amount = amount + intr ;
    amount = amount - pay;
    printf("\nSolde restant après le troisième paiement : %.2f", amount);


    return 0;
}