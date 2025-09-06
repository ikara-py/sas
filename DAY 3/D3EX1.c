// 1. Modifiez le programme repdigit.c pour qu'il affiche quels chiffres (le cas échéant)
// ont été répétés.
// Exemple d'exécution :
// Entrez un nombre : 939577
// Chiffre(s) répété(s) : 7 9



#include <stdbool.h>
#include <stdio.h>
int main(void){
    bool digit_seen[10] = {false};
    int digit, new, i;
    long n;
    
    printf("entrez un nombre : ");
    scanf("%d", &n);

    while (n > 0) {
        digit = n % 10;

        if (digit_seen[digit]) {
            printf(" %d ", digit);
        }
        digit_seen[digit] = true;
        n /= 10;
    }
    return 0;

}

