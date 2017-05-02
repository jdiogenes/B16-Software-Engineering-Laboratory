# B16-Software-Engineering-Laboratory

O repositório B16-Software-Engineering-Laboratory foi criado para simular de forma dinâmica o movimento de uma bola que realiza saltos sob a gravidade.

Para compilar este projeto, basta digitar a seguinte linha de comando no linux:



g++ -o ball	ball.cpp ball.h test-ball.cpp


O arquivo ball.cpp contém a implementação das funções ball(), step() e display().


Ao executar a aplicação, a seguinte saída (100 linhas) é esperada:

![image](https://cdn.pbrd.co/images/1t8Cg29u2.png)
![image](https://cdn.pbrd.co/images/1t9fQlrR8.png)

A quantidade de linhas que a saída trará pode ser modificado na linha em que está presente a seguinte instrução: "for (int i = 0 ; i < 100 ; ++i) {" presente no arquivo test-ball.cpp, bastando apenas modificar 'i < 100' por 'i < (valor desejado de linhas que a aplicação retornará)'.



![image](https://cdn.pbrd.co/images/1rGDJGUuj.png)





