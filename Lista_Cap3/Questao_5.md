a) O laço executará exatamente 5 iterações.

b) Saídas produzidas:
i = 0, j = 10, soma = 10
i = 1, j = 9, soma = 10
i = 2, j = 8, soma = 10
i = 3, j = 7, soma = 10
i = 4, j = 6, soma = 10

c) Reescrevendo com while:

int i = 0, j = 10;
while (i < j) {
    printf("i = %d, j = %d, soma = %d\n", i, j, i + j);
    i++;
    j--;
}