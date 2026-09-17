### Q1. Truncamento de Tipos e Coerção Implícita — Um estudante do curso de ADS escreveu o programa em C abaixo visando entender o comportamento de variáveis e atribuições de tipos incompatíveis. Analise o código, compile mentalmente ou em seu ambiente de desenvolvimento e responda às questões indicadas.

a) Valor exibido no console: 2

b) Ocorre porque uma variável do tipo int armazena apenas valores inteiros, descartando a parte
decimal do número de ponto flutuante (2.97). O fenômeno é chamado de truncamento (ou coerção
implícita de tipo).

c) Pode ser evitado declarando a variável como ponto flutuante (float ou double), utilizando conversão
explícita (type casting (int)), ou utilizando a função round() da biblioteca &lt;math.h&gt; antes de converter.