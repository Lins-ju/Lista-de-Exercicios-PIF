#### Questão 06. Comportamento e Precedência dos Incrementos - O comportamento de incrementos prefixados e pós-fixados (++x e x++) é uma fonte frequente de erros sutis na Linguagem C. Analise os dois trechos de código independentes abaixo e responda:

a) O operador prefixado (++n) incrementa a variável antes de usar seu valor na expressão. O pós-fixado
(m++) utiliza o valor atual da variável na expressão e a incrementa posteriormente.
Valores impressos:

Trecho A: n = 6, x = 6

Trecho B: m = 6, y = 5

b) A ordem de avaliação dos argumentos em uma função printf() não é garantida pelo padrão C.
Modificar e acessar a mesma variável múltiplas vezes na mesma chamada resulta em comportamento
indefinido (undefined behavior).