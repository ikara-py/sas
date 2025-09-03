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

    int note;
    printf("Entrez une note numerique : ");
    scanf("%d", &note);
    if (note < 0 || note > 100){
        printf("Erreur si la note est superieure a 100 ou inferieure a 0.");
        return 0;
    }

    note = note / 10;
 
    switch (note)
    {
    case 10:
        printf("Note litterale : A");
        break;
    case 9:
        printf("Note litterale : A");
        break;
    case 8:
        printf("Note litterale : B");
        break;
    case 7:
        printf("Note litterale : C");
        break;
    case 6:
        printf("Note litterale : D");
        break;
    default:
        printf("Note litterale : F");
        break;
    }


    return 0;
}