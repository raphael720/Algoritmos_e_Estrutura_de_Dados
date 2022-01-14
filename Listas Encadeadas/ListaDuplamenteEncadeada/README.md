<h1 align="center"> Lista Dublamente Encadeada</h1>
<p>
Na estrutura de lista encadeada não temos como percorrer eficientemente os elementos em ordem inversa, isto é, do final para o início da lista. Além disso, encadeamento simples também dificulta a retirada de um elemento da lista. Mesmo se tivermos o ponteiro do elemento que desejamos retirar, temos que percorrer a lista, elemento por elemento, para encontrar o elemento anterior, pois, dado o ponteiro para determinado elemento, não temos como acessar diretamente seu elemento anterior.

Para solucionar esses problemas, podemos formar o que se chama de  listas duplamente encadeadas. Nelas, cada elemento tem um ponteiro para o próximo elemento e um ponteiro para o elemento anterior. Desta forma, dado um elemento, podemos acessar ambos os elementos adjacentes: o próximo e o anterior. Se tivermos um ponteiro para o último elemento da lista, podemos percorrer a lista em ordem inversa, bastando acessar continuamente o elemento anterior, até alcançar o primeiro elemento da lista, que não tem elemento anterior (o ponteiro do elemento anterior vale  NULL ). 

![Figura](https://jigsaw.minhabiblioteca.com.br/books/9788595156654/epub/OEBPS/Images/fig14-8.jpg)

Figura: Arranjo da memória de uma lista duplamente encadeada.
</p>