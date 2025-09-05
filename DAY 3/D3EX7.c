#include <stdio.h>
int main(){
    int number[5][5];
    int i, j;
    int ligne, colonn;

    for(i = 0; i<5; i++){
        for(j = 0; j<5; j++){
            printf("enter number %d of the colonne %d : ", j+1,i+1);
            scanf("%d", &number[i][j]);
        }
    }

    printf("Totaux des lignes : ");
    for(i = 0; i<5; i++){
        ligne=0;
        for(j = 0; j<5; j++){
        ligne = ligne + number[i][j];
        }
        printf("%d ", ligne);
    }

    printf("\n");
    printf("Totaux des colonnes : ");
    for(j = 0; j<5; j++){
        colonn=0;
        for(i = 0; i<5; i++){
        colonn = colonn + number[i][j];
        }
        printf("%d ", colonn);
    }
    
    return 0;
}