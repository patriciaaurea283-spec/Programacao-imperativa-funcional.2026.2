a) Saída: 
Prata
Ouro
Sem Medalha

Como codigo = 2, o programa salta diretamente para o rótulo case 2: e executa printf("Prata\n");. Como não existe um comando break no case 2, o fluxo continua para o case 3:, imprimindo "Ouro\n" e "Sem Medalha\n", parando apenas ao encontrar o break.  

b) Força a saída imediata da estrutura switch-case após a execução de um bloco.   
Nome do fenómeno:fall-through.   

c) Tipos inteiros (int, char, short, long, enum e variações unsigned).   
Não é permitido float ou double. A razão é que números de ponto flutuante possuem problemas de precisão na representação binária, o que impede comparações exatas de igualdade discreta exigidas pelos rótulos case.