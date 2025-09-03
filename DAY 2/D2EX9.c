// 9. Dans le jeu de lettres SCRABBLE, les joueurs forment des mots à l'aide de
// petites tuiles, chacune contenant une lettre et une valeur faciale. La valeur faciale
// varie d'une lettre à l'autre, en fonction de sa rareté. (Voici les valeurs faciales : 1
// : AEILNORSTU, 2 : DG, 3 : BCMP, 4 : FHVWY, 5 : K, 8 : JX, 10 : QZ). Écrivez
// un programme qui calcule la valeur d'un mot en additionnant les valeurs de ses
// lettres :
// Entrez un mot : pitfall
// Valeur Scrabble : 12
// Votre programme doit accepter n'importe quel mélange de lettres majuscules et
// minuscules dans le mot.




#include <stdio.h>
#include <ctype.h>

int main(){
    int num=0;
    int i=0;
    int j=0;
    char word[50];

    printf("Entrez un mot : ");
    scanf("%s", &word);

    while (word[j]) {
        word[j] = toupper(word[j]);
        j++;
    }

    while(word[i] != '\0'){
 
    if(word[i] == 'A' || word[i] == 'E' || word[i] == 'I' || word[i] == 'L' || word[i] == 'N' || word[i] ==  'O' || word[i] == 'R' || word[i] == 'S' || word[i] == 'T' || word[i] == 'U'){
        num = num + 1;
    }
    else if(word[i] == 'D' || word[i] == 'G'){
        num = num + 2;
    }
    else if(word[i] == 'B' || word[i] == 'C' || word[i] == 'M' || word[i] == 'P'){
        num = num + 3;
    }
    else if(word[i] == 'F' || word[i] == 'H' || word[i] == 'V' || word[i] == 'W' || word[i] == 'Y'){
        num = num + 4;
    }
    else if(word[i] == 'K'){
        num = num + 5;
    }
    else if(word[i] == 'J' || word[i] == 'X'){
        num = num + 8;
    }
    else if(word[i] == 'Q' || word[i] == 'Z'){
        num = num + 10;
    }
   i++;
}
printf("%d", num);
return 0;
}