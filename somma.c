#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;
    int risultato = 0; // ERRORE: variabile non inizializzata

    risultato = a + b; 

    printf("La somma di 5 e 10 e': %d\n" risultato);

    return 0;
}
