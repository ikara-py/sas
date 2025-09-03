
// 7. Écrivez un programme qui demande à l'utilisateur d'entrer un nombre n, puis
// affiche tous les carrés pairs compris entre 1 et n. Par exemple, si l'utilisateur
// entre 100, le programme devrait afficher :
// 4
// 16
// 36
// 64
// 100



#include <stdio.h>
int main(){
    int num, t;
    t = 0;
    printf("Entrer un nombre : ");
    scanf("%d", &num);

    for (int i = 1; t <= num ; i++){
        t = i * i; 
        if(t % 2 == 0){
            printf("%d\n", t);
        }
    }


    return 0;
}