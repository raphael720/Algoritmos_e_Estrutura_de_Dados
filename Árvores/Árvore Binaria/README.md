<h1 align="center">Árvores Binarias</h1>

## Definição
<p>
Bom, cada nó poderá ter até duas folhas, sendo que ela se assemelha com a ABB (árvore binária de busca), apesar de que na ABB a inserção ser diferente.
Uma árvore "estritamente binária" é uma árvore na qual todo nó tem zero ou duas folhas. Existem autores, porém, que adotam essa definição para o termo  quase completa, e utilizam o termo  completa apenas para árvores em que todos os níveis têm o máximo número de elementos.
</p>

## Ordem de percurso em árvores binarias

Muitas operações em árvores binárias envolvem  o percurso de todas as subárvores, executando alguma ação de tratamento em cada nó, de forma que é comum percorrer uma árvore em uma das seguintes ordens:

• pré-ordem: trata raiz, percorre a esquerda, percorre a direita;

• ordem simétrica: percorre a esquerda, trata raiz, percorre a direita;

• pós-ordem: percorre a esquerda, percorre a direita, trata raiz.

## Arvore cheia
Uma árvore é dita cheia se todos os seus nós folhas estão no mesmo nível e não se pode acrescentar nenhuma nova folha sem aumentar a altura da árvore. Podemos notar que numa árvore cheia temos 1 nó no nível 0, 2 nós no nível 1, 4 nós no nível 2, 8 nós no nível 3 e assim por diante. Isto é, no nível n, temos 2^n nós. 

## Arvore degenerada 
Uma árvore é dita degenerada se todos os seus nós internos têm uma única subárvore associada. De fato, a estrutura hierárquica se degenera numa estrutura linear. Observasse que numa árvore degenerada temos um único nó em cada nível. 


