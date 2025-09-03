#include <stdio.h>
int main(){
    float dollar, taxInput, tax, result;
    printf("\nEntrez un montant : ");
    scanf("%f", &dollar);
    printf("\nAvec taxe ajoutee : ");
    scanf("%f", &taxInput);
    tax = dollar * taxInput / 100;
    result = tax + dollar;
    printf("the result %.2f", result);


}