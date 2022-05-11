
<h1 align="center">Algoritmo e estrutura de dados</h1>

<p align="center">💻 Meus estudos sobre algoritmos e estruturas de dados</p>

<div align="center">
<a href="https://github.com/raphael720/Algoritmos_e_Estrutura_de_Dados/issues"><img alt="GitHub issues" src="https://img.shields.io/github/issues/raphael720/Algoritmos_e_Estrutura_de_Dados?style=for-the-badge"></a>
<a href="https://github.com/raphael720/Algoritmos_e_Estrutura_de_Dados/network"><img alt="GitHub forks" src="https://img.shields.io/github/forks/raphael720/Algoritmos_e_Estrutura_de_Dados?style=for-the-badge"></a>
<a href="https://github.com/raphael720/Algoritmos_e_Estrutura_de_Dados/stargazers"><img alt="GitHub stars" src="https://img.shields.io/github/stars/raphael720/Algoritmos_e_Estrutura_de_Dados?style=for-the-badge"></a>
</div>

Tabela de conteúdos 
================= 
<!--ts--> 
* [Sobre](#Sobre) 
* [Tabela de Conteúdo](#tabela-de-conteudo) 
*  [Algoritmos](#) 
	* [o que é](#O-que-é-algoritmo) 
	*  [Busca](https://github.com/raphael720/Algoritmos_e_Estrutura_de_Dados/tree/main/Busca%20e%20ordena%C3%A7%C3%A3o) 
	*  [Ordenação](https://github.com/raphael720/Algoritmos_e_Estrutura_de_Dados/tree/main/Busca%20e%20ordena%C3%A7%C3%A3o) 
* [Estrutura de dados](#)
	*  [Listas encadeadas](https://github.com/raphael720/Algoritmos_e_Estrutura_de_Dados/tree/main/Listas%20Encadeadas) 
	*  [Pilas e Filas](https://github.com/raphael720/Algoritmos_e_Estrutura_de_Dados/tree/main/Pilhas%20e%20Filas) 
	*  [Tabela de Dispersão](https://github.com/raphael720/Algoritmos_e_Estrutura_de_Dados/tree/main/Hash%20Tables%20(Tabelas%20de%20disper%C3%A7%C3%A3o)) 
	*  [Árvores](https://github.com/raphael720/Algoritmos_e_Estrutura_de_Dados/tree/main/%C3%81rvores)
	*  [Grafos](#multiple-files) 
* [Observações](#Observações)
* [Tecnologias](#tecnologias) 
* [Autor](#Autor) 
<!--te-->

## Status do projeto
<h3 align='center'> 🚧 Repositório Em construção... 🚧 </h3>

## Sobre
<p>
Bom, eu criei esse repositório para registra o meu progresso quando estava estudando algoritmos e estrutura de dados. Eu dividi o repositório em algoritmos de busca e ordenação e estrutura de dados, onde cada algoritmo possui um _readme_ explicando os conceitos por trás dele. Logo abaixo tem uma explicação sobre alguns assuntos que são importantes para o entendimento das estruturas de dados e de algoritmos em geral.
</p>

## O que é algoritmo?
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

## Observações
- Os códigos em C foram feitos no CodeBlocks então para abrir os projetos é só entrar no clodeblocks e abrir o arquivo ".cbp", caso queira editar ou rodar os projetos.
- Os códigos em Java foram feitos tanto no VScode quanto no NetBeans, por isso que alguns projetos tem uma leve diferença na organização das pastas.
- Todos os códigos foram feitos no windows.

## 🛠 Tecnologias 
As seguintes ferramentas foram usadas na construção do projeto: 
- [C](https://www.amazon.com/Programming-Language-2nd-Brian-Kernighan-dp-0131103628/dp/0131103628/ref=mt_other?_encoding=UTF8&me=&qid=1640896966)
- [Python](https://www.python.org/) 
- [Java](https://www.java.com/pt-BR/)

## Referencias

### Aqui estão os livros e sites que eu usei como referencia para fazer esse repositório

- Livros
	- Introdução a Estruturas de Dados - Com Técnicas de Programação em C
	- Entendendo Algoritmos: Um Guia Ilustrado Para Programadores e Outros Curiosos
	- Estrutura de dados e seus Algoritmos by Jayme Luiz Szwarcfiter | Lilian Markenzon
- Sites
	- https://blog.pantuza.com/artigos/busca-binaria
	- https://algoritmosempython.com.br/cursos/algoritmos-python/pesquisa-ordenacao/pesquisa-binaria/
	- https://www.embarcados.com.br/algoritmos-de-ordenacao-bubble-sort/
	- https://www.geeksforgeeks.org/selection-sort/
	- https://dev.to/danielle8farias/complexidade-de-algoritmos-notacao-big-o-26al
	- https://www.ime.usp.br/~pf/mac0122-2002/aulas/hashing.html
	- https://pt.wikipedia.org/wiki/Tabela_de_dispers%C3%A3o#:~:text=Em%20ci%C3%AAncia%20da%20computa%C3%A7%C3%A3o%2C%20uma,e%20obter%20o%20valor%20desejado.
	- https://www.devmedia.com.br/algoritmos-de-ordenacao-em-java/32693

## Autor
 <img style="border-radius: 50%;" src="https://avatars.githubusercontent.com/raphael720" width="100px;" alt=""/>
 <br />
 <sub><b>Raphael Nascimento</b></sub>


Feito com ❤️ por Raphael Nascimento 👋🏽 Entre em contato!

[![Twitter Badge](https://img.shields.io/badge/-Raphael_720-1ca0f1?style=flat-square&labelColor=1ca0f1&logo=twitter&logoColor=white&link=https://twitter.com/Raphael)](https://twitter.com/Raphael_720) [![Linkedin Badge](https://img.shields.io/badge/-Raphael-blue?style=flat-square&logo=Linkedin&logoColor=white&link=https://www.linkedin.com/in/raphael-nascimento-511b09148/)](https://www.linkedin.com/in/raphael-nascimento-511b09148/) 
[![Gmail Badge](https://img.shields.io/badge/-raphaelleite720@gmail.com-c14438?style=flat-square&logo=Gmail&logoColor=white&link=mailto:raphaelleite720@gmail.com)](mailto:raphaelleite720@gmail.com)
