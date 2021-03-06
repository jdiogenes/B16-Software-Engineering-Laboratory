# B16-Software-Engineering-Laboratory

O repositório B16-Software-Engineering-Laboratory foi criado para simular de forma dinâmica o movimento de uma bola que realiza saltos sob a gravidade.

Para compilar este projeto, basta digitar a seguinte linha de comando no linux: g++ -o ball	ball.cpp ball.h test-ball.cpp


O arquivo ball.cpp contém a implementação das funções ball(), step() e display().

Na função ball() do arquivo ball.cpp estão inicializadas as seguintes variáveis:

![image](https://cdn.pbrd.co/images/1u3KIeA8p.png)

Ao executar a aplicação, a seguinte saída de 100 linhas é esperada:

![image](https://cdn.pbrd.co/images/1uc1Wo0Hs.png)

![image](https://cdn.pbrd.co/images/1ucptjlh0.png)

![image](https://cdn.pbrd.co/images/1ucPjkWz4.png)

A quantidade de linhas que a saída trará pode ser modificado na linha em que está a instrução: "for (int i = 0 ; i < 100 ; ++i) {" (presente no arquivo test-ball.cpp), bastando apenas modificar 'i < 100' por 'i < (valor desejado de linhas que a aplicação retornará)'.

Para debugar este projeto, basta digitar a seguinte linha de comando no linux: g++ -g test-ball.cpp ball.h ball.cpp -o ball_gdb

Podemos ainda construir um gráfico bidimensional com as coordenadas passadas pela aplicação. Utilizando o matlab ou um software similar, construímos o seguinte gráfico:

![image](https://cdn.pbrd.co/images/1rGDJGUuj.png)


As opções abaixo foram modificadas no doxyfile para gerar o diagrama de classe rapidamente:

    	EXTRACT_ALL            = YES
    	HAVE_DOT               = YES
    	UML_LOOK               = YES



Diagrama de classes gerado pelo programa doxygen:

![image](https://cdn.pbrd.co/images/ZqmbLh9X.png)





