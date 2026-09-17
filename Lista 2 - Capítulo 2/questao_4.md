### Questão 04. Operadores de Atribuição Composta e Precedência - Os operadores de atribuição composta (+=, -=, *=, /=, %=) executam uma operação aritmética e uma atribuição simultaneamente. Determine quais serão os valores das variáveis a, b, c e d após a execução sequencial completa das seguintes instruções de inicialização e atribuição em C. Justifique seus cálculos apresentando a ordem de avaliação passo a passo:

* **`a += b + c;`**
=> b + c = 5; a = 1 + 5 = 6.
Valor final de a: 6
* **`b *= c = d + 2;`**
=> d + 2 = 6; c = 6; b = 2 * 6 = 12.
Valores finais: b = 12, c = 6
* **`d %= a + a + a;`**
=> a + a + a = 18; d = 4 % 18 = 4.
Valor final de d: 4
* **`d -= c -= b -= a;`** (da direita para a esquerda):
1. b -= a => b = 12 - 6 = 6
2. c -= b => c = 6 - 6 = 0
3. d -= c => d = 4 - 0 = 4

Valores finais: d = 4, c = 0, b = 6
* **`a += b += c += 7;`** (da direita para a esquerda):
1. c += 7 => c = 0 + 7 = 7
2. b += c => b = 6 + 7 = 13
3. a += b => a = 6 + 13 = 19


Valores finais: a = 19, b = 13, c = 7