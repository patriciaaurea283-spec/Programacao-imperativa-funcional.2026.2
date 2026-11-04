a) Saída para idade = 65
Idoso
Adulto
Jovem

Os comandos if foram escritos de forma independente. Como 65 >= 60, 65 >= 18 e 65 >= 12 são todos verdadeiros, o programa executa as três instruções printf sucessivamente.   

b) ifs independentes: Cada condição é avaliada sequencialmente, podendo executar múltiplos blocos se mais de uma condição for verdadeira.   
Cadeia else-if: As condições são testadas em ordem e, assim que uma é verdadeira, o seu bloco é executado e todas as outras opções restantes são ignoradas.   

c) #include <stdio.h>

int main() {
    int idade = 25;

    if (idade >= 60) {
        printf("Idoso\n");
    } else if (idade >= 18) {
        printf("Adulto\n");
    } else if (idade >= 12) {
        printf("Jovem\n");
    } else {
        printf("Criança\n");
    }

    return 0;