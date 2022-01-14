<h1 align="center"> Listas Encadeadas</h1>
<p>
Para representar um conjunto de dados, a gente sabe que podemos usar um vetor. O vetor é a forma mais primitiva de representar diversos elementos agrupados. Ao declarar um vetor, reservamos um espaço contíguo de memória para armazenar seus elementos. Este fato nos permite acessar qualquer um de seus elementos a partir do ponteiro para o primeiro elemento. Dizemos que o vetor é uma estrutura que possibilita o acesso randômico aos elementos, pois podemos acessar qualquer elemento diretamente. No entanto, o vetor não é uma estrutura de dados muito flexível, pois precisamos dimensioná-lo com um número máximo de elementos. O uso de vetores dinâmicos, através de realocação da memória, ameniza o problema, mas não necessariamente é uma solução em todas as situações, pois o custo computacional para realocar um vetor é alto.

A alternativa consiste em utilizar estruturas de dados que cresçam à medida que precisamos armazenar novos elementos (e diminuam à medida que precisamos retirar elementos armazenados anteriormente). Estas estruturas dinâmicas fazem uma alocação de memória para cada novo elemento armazenado.

Ponto importante, as listas encadeadas são amplamente usadas para implementar diversas outras estruturas de dados com semânticas próprias.
</p>
