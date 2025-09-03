/*
4. En utilisant l'instruction switch, écrivez un programme qui convertit une note
numérique en une note littérale :
Entrez une note numérique : 84
Note littérale : B
Utilisez le barème suivant : A = 90–100, B = 80–89, C = 70–79, D = 60–69,
F = 0–59. Affichez un message d'erreur si la note est supérieure à 100 ou
inférieure à 0.
*/

#include <stdio.h>

int main(){
    int d1, d2, m1, m2, y1, y2;
    printf("Entrez la premiere date (mm/jj/aa) : ");
    scanf("%d/%d/%d", &d1, &m1, &y1);

    printf("Entrez la premiere date (mm/jj/aa) : ");
    scanf("%d/%d/%d", &d2, &m2, &y2);
    if (y1 > y2){
        printf("%d/%d/%d est plus tot que %d/%d/%d\n", d2, m2, y2, d1, m1, y1);
    }
    else if (y1 < y2 && m1 > m2){
        printf("%d/%d/%d est plus tot que %d/%d/%d\n", d2, m2, y2, d1, m1, y1);
    }
    else if (y1 < y2 && m1 < m2 && d1 > d2){
        printf("%d/%d/%d est plus tot que %d/%d/%d\n", d2, m2, y2, d1, m1, y1);
    }
    else{
        printf("%d/%d/%d est plus tot que %d/%d/%d\n", d1, m1, y1, d2, m2, y2);

    }
        
    
    return 0;
}