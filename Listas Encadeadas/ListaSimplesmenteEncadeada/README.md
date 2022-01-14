<h1 align="center"> Lista Simplesmente Encadeada</h1>
<p>
Numa lista encadeada, para cada novo elemento inserido na estrutura, alocamos um espaço de memória para armazená-lo. Desta forma, o espaço total de memória gasto pela estrutura é proporcional ao número de elementos nela armazenado. No entanto, não podemos garantir que os elementos armazenados na lista ocuparão um espaço de memória contíguo; portanto, não temos acesso direto aos elementos da lista. Para que seja possível acessar todos os elementos da lista, devemos explicitamente guardar o encadeamento dos elementos, o que é feito armazenando-se, junto com a informação, um ponteiro para o próximo elemento (ou nó) da lista. 

A estrutura consiste numa sequência  encadeada de elementos, em geral chamados de  _nós da lista_. Um nó da lista é representado por uma estrutura que contém, conceitualmente, dois campos: a informação armazenada e o ponteiro para o próximo elemento da lista. A partir do primeiro nó, podemos alcançar o segundo seguindo o encadeamento e assim por diante. O último nó da lista armazena, como próximo nó, um ponteiro inválido, com valor  NULL , sinalizando que não existe um próximo nó. A lista em si, portanto, deve ser representada por um ponteiro para o primeiro nó.
</p>