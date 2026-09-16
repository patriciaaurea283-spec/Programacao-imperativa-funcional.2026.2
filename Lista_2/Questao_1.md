a) O valor será 2 

b) Isso acontece já que o tipo da variável declarada é int, mas foi atribuído um float. Por isso, houve o truncamento do valor, onde só a parte inteira fica na variável, aparecendo no printf, e o resto é descartado acontecendo a conversão implicíta.

c) Mantendo a precisão. Declarando a variável como float ou double.
Utilizando a função round() da biblioteca <math.h> antes de converter/atribuir para inteiro: valor_inteiro = (int)round(2.97);.

-> Conversão explícita