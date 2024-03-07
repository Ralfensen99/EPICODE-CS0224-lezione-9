#include<stdio.h>
#include <unistd.h> 

void SetDomande(){
    char Nick[50];
    int Scelta,Punteggio;
    printf("Inserisci il tuo nome");
    scanf("%s",Nick);
    Punteggio = 0;
    /* Domanda 1 */
    printf("Chi e' il primo studente che verra' cacciato da Epicode per motivi disciplinari?\n");
    printf("1) Raffaele Iacono\n");
    printf("2) Il cane di Raffaele Iacono\n");
    printf("3) La finestra di Raffaele Iacono\n");
    scanf("%d", &Scelta);
    if (Scelta == 1) {
        Punteggio = Punteggio + 1;
        printf("Corretto! Il tuo attuale punteggio e': %d\n", Punteggio);
    } else if (Scelta != 1) {
        printf("Risposta sbagliata\n");
    }
    /* Domanda 2 */
    printf("Che se magna il Prof.Rampino Paolo sta sera?\n");
    printf("1) Orecchiette con l cim d rep\n");
    printf("2) Pasta con salsa piccante dell'eurospin\n");
    printf("3) Bombette di carne pugliesi\n");
    scanf("%d", &Scelta);
    if (Scelta == 3) {
        Punteggio = Punteggio + 1;
        printf("Corretto! Il tuo attuale punteggio e': %d\n", Punteggio);
    } else if (Scelta != 3) {
        printf("Risposta sbagliata\n");
    }
    /* Domanda 3 */
    printf("Quale squadra dimentica scausalmente di fare la fattura?\n");
    printf("1) NetRiders\n");
    printf("2) Data Defenders\n");
    printf("3) ByteRebels\n");
    scanf("%d", &Scelta);
    if (Scelta == 2) {
        Punteggio = Punteggio + 1;
        printf("Corretto! Il tuo attuale punteggio e': %d\n", Punteggio);
    } else if (Scelta != 2) {
        printf("Risposta sbagliata\n");
    }
     printf("Grazie per aver giocato con noi %s. Il tuo punteggio e': %d\n", Nick, Punteggio); 
}

int main(){
    /* Introduzione */
    printf("Benvenuto in questo quiz, se accetti sarai consapevole del fatto che o andrai alla cassa o andrai stirato \n");
    /* Selezione avvio del gioco */
    int selezione = 0;
    printf("Seleziona il tasto 1 per iniziare a giocare, seleziona il tasto 2 per scappare come un coniglio che non balla la fresca\n");
    scanf("%d", &selezione);
    if (selezione == 1) {
        SetDomande();
    } else if (selezione == 2) {
        printf("Ci vuole coraggio nella vita ma tu non ne hai\n");
    }
    sleep(5);
    return 0;
}