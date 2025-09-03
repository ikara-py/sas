#include <stdio.h>
int main(){
    int result, amount;
    printf("Entrer un montant en dollars americains : ");
    scanf("%d", &amount);

    result = amount / 20;
    printf("\nBillets de 20$ : ");
    printf("%d", result);

    amount = amount % 20;
    result = amount / 10;
    printf("\nBillets de 10$ : ");
    printf("%d", result);

    amount = amount % 10;
    result = amount / 5;
    printf("\nBillets de 5$ : ");
    printf("%d", result);

    amount = amount % 5;
    result = amount / 1;
    printf("\nBillets de 5$ : ");
    printf("%d", result);


    return 0;
}