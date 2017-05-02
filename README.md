# B16-Software-Engineering-Laboratory

O repositório B16-Software-Engineering-Laboratory foi criado para simular de forma dinâmica o movimento de uma bola que realiza saltos sob a gravidade.

Para compilar este projeto, basta digitar a seguinte linha de comando no linux: g++ -o ball	ball.cpp ball.h test-ball.cpp


O arquivo ball.cpp contém a implementação das funções ball(), step() e display().

na função ball() do arquivo ball.cpp são inicializadas as seguintes variáveis:


r(0.1) -> Tamanho da bola

x(0) -> Coordenada inicial x

y(0) -> Coordenada inicial y.
vx(0.3) -> Velocidade da bola na posição x.
vy(-0.1) -> Velocidade da bola na posição y
g(9.8) -> Gravidade
m(1) -> Massa da bola
xmin(-1) -> Coordenada mínima da geometria da caixa 'x'
xmax(1) -> Coordenada máxima da geometria da caixa 'x'
ymin(-1) -> Coordenada mínima da geometria da caixa 'y'
ymax(1) -> Coordenada máxima da geometria da caixa 'y'

Ao executar a aplicação, a seguinte saída de 100 linhas é esperada:

![image](https://cdn.pbrd.co/images/1t8Cg29u2.png)
![image](https://cdn.pbrd.co/images/1t9fQlrR8.png)
A quantidade de linhas que a saída trará pode ser modificado na linha em que está presente a seguinte instrução: "for (int i = 0 ; i < 100 ; ++i) {" presente no arquivo test-ball.cpp, bastando apenas modificar 'i < 100' por 'i < (valor desejado de linhas que a aplicação retornará)'.

Podemos ainda construir um gráfico bidimensional com as coordenadas passadas pela aplicação. Utilizando o matlab ou um software similar, construímos o seguinte gráfico:

![image](https://cdn.pbrd.co/images/1rGDJGUuj.png)





