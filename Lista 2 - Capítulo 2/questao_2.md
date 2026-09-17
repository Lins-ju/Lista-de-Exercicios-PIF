### Entrada Standard de Caracteres vs. Bibliotecas Legadas — Historicamente,literaturas de C utilizam funções unbuffered de entrada definidas na biblioteca legada e não-padrão <conio.h>, tais como getch() e getche(), para ler caracteres imediatamente sem exigir que ousuário pressione [ENTER]. Sob a perspectiva da portabilidade moderna da linguagem e do padrão
### ANSI C:

a) O uso de &lt;conio.h&gt; deve ser evitado porque é uma biblioteca proprietária legada (específica do MS-
DOS/Windows) e não faz parte do padrão ANSI C/ISO C e pode e pode comprometer a portabilidade em sistemas
modernos como Linux e macOS.

b) Funções equivalentes da &lt;stdio.h&gt;: 

Entrada: getchar(), fgetc(). 

Saída: putchar(), fputc().

c) Trecho de código para ignorar eventuais quebras de linha:
char c;
scanf(&quot; %c&quot;, &amp;c);