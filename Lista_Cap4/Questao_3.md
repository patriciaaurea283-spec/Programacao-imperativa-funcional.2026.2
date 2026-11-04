a) Funcionamento e avaliação para media = 6.8:
A instrução situacao = (media >= 7.0) ? 'A' : 'R'; avalia a expressão (media >= 7.0). Se a condição for verdadeira, devolve 'A'; caso contrário, devolve 'R'.
Para media = 6.8, a condição 6.8 >= 7.0 é falsa (0), logo a variável situacao armazenará o caráctere 'R'.   

b) Reescrita utilizando if-else:

if (media >= 7.0) {
    situacao = 'A';
} else {
    situacao = 'R';
}

c) O operador ternário não pode substituir qualquer estrutura if-else. Ele é projetado para devolver um valor dentro de uma expressão. Suas limitações não permite a execução de blocos com múltiplos comandos complexos em cada ramo de forma legível.Não aceita estruturas de controlo como break, continue, return ou declarações de variáveis dentro das suas ramificações.