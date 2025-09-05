// 4. Modifiez le programme reverse.c pour utiliser l'expression (int) (sizeof(a)
// / sizeof(a[0])) (ou une macro avec cette valeur) pour la longueur du tableau.


#include <stdio.h>
#define N 10

int main (void){
    int a[N], i;
    int size = (int)(sizeof(a)/sizeof(a[0]));

    printf("enter %d number : ", N);
    for (i = 0; i < size ; i++){
        scanf("%d", &a[i]);
    }

    for (i = size - 1; i >= 0; i--){
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}

