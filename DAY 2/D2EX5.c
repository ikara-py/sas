// 5. Écrivez un programme qui demande à l'utilisateur d'entrer deux entiers, puis
// calcule et affiche leur plus grand commun diviseur (GCD) :

// Entrez deux entiers : 12 28
// Le plus grand commun diviseur est : 4
// Indice : L'algorithme classique pour calculer le GCD, connu sous le nom
// d'algorithme d'Euclide, fonctionne comme suit : Soient m et n des variables
// contenant les deux nombres. Si n est égal à 0, arrêtez-vous : m contient le GCD.
// Sinon, calculez le reste de la division de m par n. Copiez n dans m et copiez le reste
// dans n. Répétez ensuite le processus, en commençant par tester si n est égal à 0.

#include <stdio.h>
int main(){

    int num1, num2, small, i, result;
    printf("Entrez deux entiers : ");
    scanf("%d %d", &num1, &num2);
    if(num1 < num2){
        small = num2;
    }
    else {
        small = num2;
    }

    for(i = small; i >= 1; --i ){
        if(num1 % i == 0 && num2 % i == 0){
            result = i;
            break;
        }
    }
    printf("Le plus grand commun diviseur est : %d", result);
    return 0;
}