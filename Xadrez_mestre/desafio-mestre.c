#include <stdio.h>

//primeiro definir os voids

void moverrainha(int rainha){
    if (rainha > 0){
        printf ("Esquerda\n");
    moverrainha(rainha - 1);

    }
}

void movertorre(int torre){
    if (torre > 0){
        printf ("Direita\n");
    movertorre (torre - 1);
    }
}

// complicado também
void moverbispo(int bispo){
    if (bispo > 0){
        printf ("Cima Direita\n");
    moverbispo (bispo - 1);
    }
}

// cavalo um pouco mais complicado...
void movercavalo(int cavalo){
    if (cavalo > 0){
        printf ("Cima\nCima\nDireita\n");
    movercavalo (cavalo -1);
    }
}

int main(){

int qntrainha = 8;
printf ("Movimentação da Rainha\n");
moverrainha (qntrainha);

printf ("\n"); // para dar um espaço, para não ficar muito colado.

int qnttorre = 5;
printf("Movimento da Torre\n");
movertorre (qnttorre);

printf ("\n");

int qntbispo = 5;
printf ("Movimento do Bispo\n");
moverbispo (qntbispo);

printf ("\n");

int qntcavalo = 1;
printf ("Movimentação do Cavalo\n");
movercavalo (qntcavalo);

    return 0;
}