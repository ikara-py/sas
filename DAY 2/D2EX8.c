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

int main() {
    char alphabetique[20];
    int i=0;
    printf("Entrez un numéro de telephone : ");
    scanf("%s", alphabetique);

while(alphabetique[i] != '\0'){
    i++;
    if(alphabetique[i] == 'A' || alphabetique[i] == 'B' || alphabetique[i] == 'C'){
        printf("2");
    }
    else if(alphabetique[i] == 'D' || alphabetique[i] == 'E' || alphabetique[i] == 'F'){
        printf("3");
    }
    else if(alphabetique[i] == 'G' || alphabetique[i] == 'H' || alphabetique[i] == 'I'){
        printf("4");
    }
    else if(alphabetique[i] == 'J' || alphabetique[i] == 'K' || alphabetique[i] == 'L'){
        printf("5");
    }
    else if(alphabetique[i] == 'M' || alphabetique[i] == 'N' || alphabetique[i] == 'O'){
        printf("6");
    }
    else if(alphabetique[i] == 'P' || alphabetique[i] == 'R' || alphabetique[i] == 'S'){
        printf("7");
    }
    else if(alphabetique[i] == 'T' || alphabetique[i] == 'U' || alphabetique[i] == 'V'){
        printf("8");
    }
    else if(alphabetique[i] == 'W' || alphabetique[i] == 'X' || alphabetique[i] == 'Y'){
        printf("9");
    }
    
}
return 0;
}