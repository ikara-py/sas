#include <stdio.h>

int main() {
    int hour, min, convert;
    printf("Entrez une heure (24h) : ");
    scanf("%d:%d", &hour, &min);

    convert = hour * 60 + min;

    if (convert > 1222) {
        printf("L'heure de depart la plus proche est 9h45 p.m., arrivant a 11h58 p.m.\n");
    }
    else if (convert > 1042) {
        printf("L'heure de depart la plus proche est 7h00 p.m., arrivant a 9h20 p.m.\n");
    }
    else if (convert > 892) {
        printf("L'heure de depart la plus proche est 3h45 p.m., arrivant a 5h55 p.m.\n");
    }
    else if (convert > 803) {
        printf("L'heure de depart la plus proche est 2h00 p.m., arrivant a 4h08 p.m.\n");
    }
    else if (convert > 723) {
        printf("L'heure de depart la plus proche est 12h47 p.m., arrivant a 3h00 p.m.\n");
    }
    else if (convert > 631) {
        printf("L'heure de depart la plus proche est 11h19 a.m., arrivant a 1h31 p.m.\n");
    }
    else if (convert > 531) {
        printf("L'heure de depart la plus proche est 9h43 a.m., arrivant a 11h52 a.m.\n");
    }
    else {
        printf("L'heure de depart la plus proche est 8h00 a.m., arrivant a 10h16 a.m.\n");
    }

    return 0;
}