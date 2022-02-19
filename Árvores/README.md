<h1 align="center">Árvores</h1>

## Definição
<p>
A forma mais natural de definir uma estrutura de árvore é usando recursividade. Uma árvore é composta por um conjunto de nós. Existe um nó r, denominado raiz, que contém zero ou mais subárvores, cujas (sub)raízes são ligadas diretamente a r. Esses nós raízes das subárvores são ditos filhos do nó pai, r. Nós com filhos são comumente chamados de nós internos e nós que não têm filhos são chamados de folhas ou nós externos.
Bom, por exemplo, os arquivos (documentos) que criamos num computador são armazenados dentro de uma estrutura hierárquica de diretórios (pastas). Existe um diretório base dentro do qual podemos armazenar diversos subdiretórios e arquivos. Por sua vez, dentro dos subdiretórios, podemos armazenar outros subdiretórios e arquivos e assim por diante, recursivamente. E as árvores são estruturas de dados adequadas para a representação de hierarquias.
</p>

## Tipos de árvores
O número de filhos permitido por nó e as informações armazenadas em cada nó diferenciam os diversos tipos de árvores existentes. Bom, aqui no repositório, eu só vou apresentar dois tipos de arvores. Primeiro, as árvores binárias, nas quais cada nó tem, no máximo, dois filhos. Depois, as estruturas de árvores nas quais o número de filhos é variável. 

## Altura de uma árvore

Uma propriedade fundamental de todas as árvores é que só existe um caminho da raiz para qualquer nó. Com isso, podemos definir a altura de uma árvore como sendo o comprimento do caminho da raiz até a folha mais distante. Assim, a altura de uma árvore com apenas o nó raiz é zero e, por conseguinte, dizemos que a altura de uma árvore vazia é negativa e vale −1. Também podemos numerar os níveis em que os nós aparecem na árvore. A raiz está no nível 0, seus filhos diretos no nível 1 e assim por diante. O último nível da árvore é o nível h, sendo h a altura da árvore. 

A altura indica o esforço computacional necessário para alcançar qualquer nó da árvore a partir da raiz. 
