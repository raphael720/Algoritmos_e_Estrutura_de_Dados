<h1 align="center">Busca Binaria</h1>
<p>
A pesquisa binária (ou busca binária) funciona assim. Começamos com um palpite de onde o elemento procurado pode estar. Nosso palpite é sempre escolher o elemento do meio do array. Se esse palpite estiver certo, a pesquisa termina, pois encontramos o elemento procurado. Se o palpite estiver errado, podemos restringir nosso próximo palpite a uma parte específica do arranjo, dado que ele está ordenado. O raciocínio por trás disso é que se o elemento procurado for maior que o elemento do meio do array, sabemos que o elemento procurado só pode estar na segunda metade do array. Caso contrário, o elemento procurado só pode estar na primeira metade do array.
</p>

## Tempo de Execução
<p>
A busca binaria usa a técnica de dividir para conquistar, ela consiste em dividir um problema em problemas menores (sub-problemas). No nosso problema seria  dividir/reduzir pela metade o espaço de busca à cada iteração. Essa abordagem resulta em tempo de execução O(log n), sendo n o tamanho do vetor.
</p>
