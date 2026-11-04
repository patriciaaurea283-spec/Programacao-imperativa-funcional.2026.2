a) Saída: a=0, b=5, c=8   Análise: O incremento ++b não foi executado.   Em (a != 0 && ++b > 5), o primeiro operando a != 0 (0 != 0) avalia para falso. Pela regra de curto-circuito do operador &&, a segunda parte nem sequer é testada, mantendo b = 5. O bloco else é executado: c -= 2 (resultando em 10 - 2 = 8).   

b)Se o primeiro operando for falso (0), a expressão inteira é falsa e os operandos seguintes são ignorados.   Operador || (OU): Se o primeiro operando for verdadeiro (diferente de 0), a expressão inteira é verdadeira e os operandos seguintes são ignorados.   

c) a == 0 (0 == 0) é verdadeiro. Devido ao curto-circuito do ||, a expressão ++b > 5 não é executada (mantendo b = 5).   O bloco do if é executado (c += 10), tornando c = 10 + 10 = 20.   
Valores finais: b = 5 e c = 20.