#include <stdio.h>
int main(){

//Movimentação da rainha 8 casas para a esquerda
//Estrutura de repetição for

printf ("Movimento da Rainha: \n");
for (int r = 1; r <= 8; r++){
    printf ("Esquerda, ");
}

printf ("\n"); // para dar um espaço, para não ficar muito colado.

//Movimento da torre 5 casas para a direita
//Estrutura de repetição while

printf("Movimento da Torre: \n");

int t = 1;
while (t <= 5){
    printf ("Direita, ");
    t++;
}

printf ("\n"); // para dar um espaço, para não ficar muito colado.

//Movimento do bispo 5 casas para a direita (DIAGONAL)
//estrutura de repetição do while
// cima direita 5x

int b = 1;
printf ("Movimento do Bispo: \n");

do {

    printf ("Cima Direita, ");
    b++;

} while (b <= 5);



}