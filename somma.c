#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int risultato = 0; // ERRORE: variabile non inizializzata

    risultato = risultato + a + b; 

    printf("La somma di %d e %d e': %d\n", a, b, risultato);

    return 0;
}
