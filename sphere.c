/*
2. Écrivez un programme qui calcule le volume d'une sphère de 10 mètres de rayon,
en utilisant la formule v = 4/3πr3 . Écrivez la fraction 4/3 comme 4.0f/3.0f.
(Essayez de l'écrire comme 4/3. Que se passe-t-il ?)
Indice : C n'a pas d'opérateur d'exponentiation, vous devrez donc multiplier r par
lui-même deux fois pour calculer r
3

Modifiez le programme du projet 2 pour qu'il demande à l'utilisateur d'entrer le rayon
de la sphère.

*/
#include <stdio.h>
int main(){
    float result, v;
    float PI = 3.14159;

    printf("Entrer le rayon de la sphère : ");

    scanf("%f", &v);

    result = 4.0/3.0 * PI * v*v*v;

    printf("%f", result);

    return 0;
}