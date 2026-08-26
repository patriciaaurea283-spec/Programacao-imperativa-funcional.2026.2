#include <stdio.h>
#include <stdlib.h>

int main ()
{
    printf("%c%c%cPrimeiro programa", '\n', '\t', '\"');
    printf("%c",'\"');

    system("PAUSE");
    
    return 0;
}

/*
O programa exibe a frase "Primeiro programa" utilizando o especificador %c.

Os caracteres de escape são interpretados normalmente, realizando ações como quebra de linha, tabulação e exibição de aspas duplas.

Isso acontece porque, quando uma sequência de escape está entre aspas simples, o compilador a transforma em um único caractere, representado por um valor numérico na tabela ASCII.

Assim, o %c utiliza esse valor para informar ao printf qual caractere ou ação de controle deve ser exibido.
*/
