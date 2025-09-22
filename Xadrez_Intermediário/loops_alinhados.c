/* Funcionamento básico

Para ilustrar o funcionamento dos loops aninhados, 
vamos ver um exemplo utilizando as três formas: 
empregando a estrutura for, while e do-while. Vamos lá!

Exemplo em for

Veja como usar loops for aninhados para imprimir uma tabela de multiplicação 
de 1 a 10.
*/


#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d\t", i * j);
        }
        printf("\n");
    }
    return 0;
}


/*
Exemplo em while

Veja como utilizar loops while aninhados para imprimir uma tabela 
de multiplicação de 1 a 10. */
/*
#include <stdio.h>
 
int main() {
    int i = 1;
    while (i <= 10) {
        int j = 1;
        while (j <= 10) {
            printf("%d\t", i * j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
*/
/* Exemplo em do-while

Agora, veja como utilizar loops do-while aninhados para imprimir
uma tabela de multiplicação de 1 a 10.
*/
/*
#include <stdio.h>
 
int main() {
    int i = 1;
    do {
        int j = 1;
        do {
            printf("%d\t", i * j);
            j++;
        } while (j <= 10);
        printf("\n");
        i++;
    } while (i <= 10);
    return 0;
}
*/