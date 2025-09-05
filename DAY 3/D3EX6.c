#include <stdio.h>
#include<ctype.h>

int main(){
    char message[100];
    int size = sizeof(message)/sizeof(message[0]);
    int i;
    printf("enter the message : ");
    fgets(message, size, stdin);

    for (i=0; i <= size; i++){
        message[i] = toupper(message[i]);
        if(message[i]== 'A'){
            message[i] = '4';
        }
        else if (message[i]== 'B')
        {
            message[i] = '8';
        }
        else if (message[i]== 'E')
        {
            message[i] = '3';
        }
        else if (message[i]== 'I')
        {
            message[i] = '1';
        }
        else if (message[i]== 'O')
        {
            message[i] = '0';
        }
        else if (message[i]== 'S')
        {
            message[i] = '5';
        }
    }
    

    printf("%s!!!!!!!", message);


    return 0;
}