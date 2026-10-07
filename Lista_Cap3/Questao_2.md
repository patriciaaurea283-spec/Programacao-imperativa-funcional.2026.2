a) A variável soma foi declarada dentro do bloco do laço for. Em C, variáveis declaradas em um bloco têm escopo local e são destruídas ao fim desse bloco. O printf está fora desse escopo, causando erro de compilação por tentar acessar uma variável inexistente.

b) Se o printf estivesse no laço, o valor impresso não seria o acumulado correto porque a instrução int soma = 0; recriaria e zeraria a variável a cada nova iteração, descartando o valor anterior.

c) Código corrigido:

#include <stdio.h>
#include <stdlib.h>
int main() {
    int i;
    int soma = 0; /* Variável com escopo na função main */
    for (i = 1; i < 10; i++) {
        soma += i * i;
    }
    printf("Soma final = %d\n", soma);
    system("PAUSE");
    return 0;
}