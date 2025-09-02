/*
Écrivez un programme qui demande à l'utilisateur d'entrer une valeur pour x, puis
affiche la valeur du polynôm


6. Modifiez le programme du projet 5 pour que le polynôme soit évalué en utilisant la
formule suivante :


*/

#include <stdio.h>
int main(){
    float x, result;
    printf("Entrer une valeur : ");
    scanf("%f", &x);
    //result = 3 * (x*x*x*x*x) + 2 * (x*x*x*x) - 5 * (x*x*x) - (x*x) + (7 * x) - 6;
    result = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("the result %.2f", result);

    return 0;
}