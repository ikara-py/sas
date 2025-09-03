/*
8. Écrivez un programme qui traduit un numéro de téléphone alphabétique en sa
forme numérique :
Entrez un numéro de téléphone : CALLATT
2255288
(Si vous n'avez pas de téléphone à portée de main, voici la correspondance des lettres
sur les touches : 2=ABC, 3=DEF, 4=GHI, 5=JKL, 6=MNO, 7=PRS, 8=TUV,
9=WXY). Si le numéro de téléphone original contient des caractères non
alphabétiques (chiffres ou ponctuation, par exemple), laissez-les inchangés :

1
1

Entrez un numéro de téléphone : 1-800-COL-LECT
1-800-265-5328
Vous pouvez supposer que toutes les lettres saisies par l'utilisateur sont en
majuscules.
*/


#include <stdio.h>
#include <ctype.h> // This header is needed for toupper()

int main() {
    char alphabetique[20];
    int i = 0;
    printf("Entrez un numéro de telephone : ");
    scanf("%s", alphabetique);

    while (alphabetique[i] != '\0') {
        char current_char = toupper(alphabetique[i]);
        
        if (current_char == 'A' || current_char == 'B' || current_char == 'C') {
            printf("2");
        } else if (current_char == 'D' || current_char == 'E' || current_char == 'F') {
            printf("3");
        } else if (current_char == 'G' || current_char == 'H' || current_char == 'I') {
            printf("4");
        } else if (current_char == 'J' || current_char == 'K' || current_char == 'L') {
            printf("5");
        } else if (current_char == 'M' || current_char == 'N' || current_char == 'O') {
            printf("6");
        } else if (current_char == 'P' || current_char == 'R' || current_char == 'S') {
            printf("7");
        } else if (current_char == 'T' || current_char == 'U' || current_char == 'V') {
            printf("8");
        } else if (current_char == 'W' || current_char == 'X' || current_char == 'Y') {
            printf("9");
        }
        i++;
    }
    return 0;
}