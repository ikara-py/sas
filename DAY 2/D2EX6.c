
// 6. Écrivez un programme qui demande à l'utilisateur d'entrer une fraction, puis
// réduit cette fraction à sa plus simple expression :
// Entrez une fraction : 6/12
// Sous sa forme la plus simple : 1/2
// Indice : Pour réduire une fraction à sa plus simple expression, commencez par
// calculer le GCD du numérateur et du dénominateur. Ensuite, divisez le numérateur
// et le dénominateur par ce GCD.


#include <stdio.h>
int main(){
    int numerateur, denominateur, small, i, result;
    printf("Entrez une fraction : ");
    scanf("%d/%d", &numerateur, &denominateur);
    if(numerateur < denominateur){
        small = denominateur;
    }
    else {
        small = denominateur;
    }

    for(i = small; i >= 1; --i ){
        if(numerateur % i == 0 && denominateur % i == 0){
            result = i;
            break;
        }
    }
    numerateur= numerateur / result;
    denominateur= denominateur / result;
    printf("Sous sa forme la plus simple : %d/%d", numerateur, denominateur);

    return 0;
}