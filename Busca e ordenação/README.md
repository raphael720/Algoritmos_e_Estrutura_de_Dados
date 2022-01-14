<h1  align="center"> Algoritmos e Notação Big O</h1>

## O que é?
<p>
Um algoritmo nada mais é do que uma receita que mostra passo a passo os procedimentos necessários para a resolução de uma tarefa. Ele não responde a pergunta “o que fazer?”, mas sim “como fazer”. Em termos mais técnicos, um algoritmo é uma sequência lógica, finita e definida de instruções que devem ser seguidas para resolver um problema ou executar uma tarefa. Todas as tarefas executadas pelo computador, são baseadas em Algoritmos. Logo, um algoritmo deve também ser bem definido, pois é uma máquina que o executará. Uma calculadora por exemplo, para executar a operação de multiplicação, executa um algoritmo que calcula somas até um determinado número de vezes.
</p>

## Notação Big O

<p>
A notação Big O é uma notação especial que diz o quão rápido é um algoritmo. Bem, é importante saber disso, já que você frequentemente utilizara o algoritmo que outra pessoa fez - e quando faz isso, é bom entender o quão rapido ou lento o algoritmo é.

A ideia é usar a letra O seguida de uma função sobre n que descreva o crescimento de um algoritmo, no gráfico. Quanto mais rapidamente crescer o número de operações para processar os itens, pior será o desempenho do algoritmo.

[![gráfico de crescimento de complexidade](https://res.cloudinary.com/practicaldev/image/fetch/s--u5FI10Fg--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://thepracticaldev.s3.amazonaws.com/i/9f7ruqkkz9xl0937b1nf.png)](https://res.cloudinary.com/practicaldev/image/fetch/s--u5FI10Fg--/c_limit%2Cf_auto%2Cfl_progressive%2Cq_auto%2Cw_880/https://thepracticaldev.s3.amazonaws.com/i/9f7ruqkkz9xl0937b1nf.png)

A complexidade  **O(1) (constante)**  é aquela em que não há crescimento do número de operações, pois não depende do volume de dados de entrada (n). Por exemplo: o acesso direto a um elemento de uma matriz.

A complexidade  **O(log n) (logaritmo)**  é aquela em que o crescimento do número de operações é menor do que o do número de itens. Exemplo: caso médio do algoritmo de busca em árvores binárias ordenadas.

A complexidade  **O(n) (linear)**  é aquela em que o crescimento no número de operações é diretamente proporcional ao crescimento do número de itens. Por exemplo: o algoritmo de busca em uma lista/vetor.

A complexidade  **O(n log n) (linearitmica ou quasilinear)**  é aquela em que é resultado das operações (log n) executada n vezes. Exemplo: o caso médio do algoritmo de ordenação Quicksort.

A complexidade  **O(n^2 ) (quadrático)**  é aquela que ocorre quando os itens de dados são processados aos pares, muitas vezes com repetições dentro da outra. Com dados suficientemente grandes, tendem a se tornar muito ruim. Por exemplo: o processamento de itens de uma matriz bidimensional.

A complexidade  **O(2^n ) (exponencial)**  é aquela em que a medida que n aumenta, o fator analisado (tempo ou espaço) aumenta exponencialmente. Não é executável para valores muito grandes e não são úteis do ponto de vista prático. Exemplo: busca em uma árvore binária não ordenada.

A complexidade  **O(n!) (fatorial)**  é aquela em que o número de instruções executadas cresce muito rapidamente para um pequeno número de dados. Por exemplo: um algoritmo que gere todas as possíveis permutações de uma lista.
</p>

## Busca e Ordenação

<p>
Em diversas aplicações, os dados devem ser armazenados obedecendo a uma determinada ordem. Alguns algoritmos podem explorar a ordenação dos dados para operar de maneira mais eficiente, do ponto de vista de desempenho computacional. Para ordenar os dados, temos basicamente duas alternativas: ou inserimos os elementos na estrutura de dados, respeitando a ordenação (dizemos que a ordenação é garantida por construção) ou, a partir de um conjunto de dados já criado, aplicamos um algoritmo para ordenar seus elementos. 
</p>
