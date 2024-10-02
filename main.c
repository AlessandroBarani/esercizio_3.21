#include <stdio.h>
int main() {
    int gg, mm, aa;
    int validita = 1;
    printf("Inserisci la data (GG MM AAAA): ");
    scanf("%d %d %d", &gg, &mm, &aa);
    if (mm < 1 || mm > 12){
        validita = 0;
    }else {
        switch (mm) {
            case 1: // Gennaio
            case 3: // Marzo
            case 5: // Maggio
            case 7: // Luglio
            case 8: // Agosto
            case 10: // Ottobre
            case 12: // Dicembre
                if (gg < 1 || gg > 31){
                    validita = 0;
                }
            break;
            case 2: // Febbraio
                if ((aa % 4 == 0 && aa % 100 != 0) || (aa % 400 == 0)) {
                    if (gg < 1 || gg > 29) {
                        validita = 0;
                    }
                } else {
                    if (gg < 1 || gg > 28) {
                        validita = 0;
                    }
                }
            break;
            case 4: // Aprile
            case 6: // Giugno
            case 9: // Settembre
            case 11: // Novembre
                if (gg < 1 || gg > 30) {
                    validita = 0;
                }
            break;
        }
    }
    if (validita) {
        printf("La data esiste\n");
    } else {
        printf("La data non esiste\n");
    }
    return 0;
}