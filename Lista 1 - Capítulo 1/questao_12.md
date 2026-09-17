## Questão 12
A declaração de variáveis define o tipo e o identificador de cada espaço reservado na
memória. Analise cada uma das declarações na tabela a seguir, preencha o seu status (Correto ou
Incorreto) e, caso seja incorreto, justifique detalhadamente o erro sintático:


| Instrução | Status (C/I) | Justificativa Teórica |
| :--- | :--- | :--- |
| int a; | Correto | Forma correta de declarar uma variável do tipo inteiro. |
| float b; | Correto | Forma correta de declarar uma variável de ponto flutuante. |
| double float c; | Incorreto | `double` e `float` são tipos básicos distintos e não podem ser combinados. |
| unsigned char d; | Correto | Forma correta de declarar `char` sem sinal. |
| unsigned e; | Correto | Depois do ISO C, `unsigned` é válido e o compilador assume que é `int`. |
| long float f; | Incorreto | `float` não aceita o modificador `long` em C. `double` já faz esse papel. |
| long g; | Correto | Depois do ISO C, `long` isolado é uma sintaxe válida e o compilador assume que é `int`. |
| long double h; | Correto | Forma correta de declarar uma variável do tipo ponto flutuante estendido. |