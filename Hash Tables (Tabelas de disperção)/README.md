<h1 align="center">Tabelas de Disperção</h1>
Bom, para obter algoritmos eficientes, armazenamos os elementos ordenados e tiramos proveito dessa ordenação para alcançar eficientemente o elemento procurado. Estudando algoritmos de busca, chegamos à conclusão de que os algoritmos eficientes demandam um esforço computacional de O(log  n). As tabelas de dispersão (hash tables), que, se bem projetadas, podem ser usadas para buscar um elemento em ordem constante:  O(1). O preço pago por essa eficiência será um uso maior de memória, mas esse uso excedente não precisa ser tão grande e é proporcional ao número de elementos armazenados.

## Função de espalhamento ou Hashing
A função de espalhamento ou função de dispersão é a responsável por gerar um índice a partir de determinada chave. Caso a função seja mal escolhida, toda a tabela terá um mau desempenho.

O ideal para a função de espalhamento é que sejam sempre fornecidos índices únicos para as chaves de entrada. A função perfeita seria a que, para quaisquer entradas A e B, sendo A diferente de B, fornecesse saídas diferentes. Quando as entradas A e B são diferentes e, passando pela função de espalhamento, geram a mesma saída, acontece o que chamamos de colisão.

Na prática, funções de espalhamento perfeitas ou quase perfeitas são encontradas apenas onde a colisão é intolerável (por exemplo, nas funções de dispersão da criptografia), ou quando conhecemos previamente o conteúdo da tabela armazenada. Nas tabelas de dispersão comuns a colisão é apenas indesejável, diminuindo o desempenho do sistema. Muitos programas funcionam sem que seu responsável suspeite que a função de espalhamento seja ruim e esteja atrapalhando o desempenho.

Por causa das colisões, muitas tabelas de dispersão são aliadas com alguma outra estrutura de dados, tal como uma lista encadeada ou até mesmo com árvores balanceadas. Em outras oportunidades a colisão é solucionada dentro da própria tabela.

## Tratamento de colisão

#### Uso da posição consecutiva livre

Nas duas primeiras estratégias que serão apresentadas, os elementos que colidem são armazenados em outros índices, ainda não ocupados da própria tabela. A escolha da posição ainda não ocupada para armazenar um elemento que colide diferencia as estratégias que serão discutidas. Na primeira estratégia, se a função de dispersão mapeia a chave de busca para um índice já ocupado, procuramos o próximo (usando incremento circular) índice livre da tabela para armazenar o novo elemento. Os índices da tabela que não têm elementos associados são preenchidos com o valor  NULL .

A função que insere um novo elemento na tabela também é simples. Fazemos o mapeamento da chave de busca através da função de dispersão e buscamos a primeira posição livre a partir do índice mapeado. Essa função recebe como parâmetros a tabela e os dados do elemento sendo inserido. A função tem como valor de retorno o ponteiro do novo aluno inserido.

#### Uso de uma segunda função de dispersão

Para evitar a concentração de posições ocupadas na tabela, a segunda estratégia faz uma variação na forma de procurar uma posição livre, a fim de armazenar o elemento que colidiu. Aqui, usamos uma segunda função de dispersão,  _h_!. Para chaves de busca dadas por números inteiros, uma possível segunda função de dispersão é definida por:

_h_!(_x_) = (_N_  − 2)  − _x_%(_N_  − 2)

Nesta fórmula,  _x_ representa a chave de busca e  _N_ , a dimensão da tabela. De posse da segunda função, se houver colisão, procuramos uma posição livre na tabela com incrementos, ainda circulares, dados por  _h_!(_x_). Isto é, em vez de tentar (_h_(_x_) + 1)%_N_ , tentamos (_h_(_x_)+  _h_!(_x_))%_N_ . Dois cuidados devem ser tomados na escolha dessa segunda função de dispersão: primeiro, ela nunca pode retornar zero, pois isso não faria com que o índice fosse incrementado; segundo, de preferência, ela não deve retornar um número divisor da dimensão da tabela, pois isso nos limitaria a procurar uma posição livre num subconjunto restrito dos índices da tabela. Se a dimensão da tabela for um número primo, garante-se automaticamente que o resultado da função não será um divisor.

A implementação da função de busca com essa estratégia é  uma pequena variação da função de busca apresentada para a estratégia anterior, usando também a segunda função de dispersão.

#### Uso de listas encadeadas

Essa estratégia consiste em tratar colisão com um encadeamento externo. Para tanto, fazemos com que cada elemento da tabela de dispersão represente um ponteiro para uma lista encadeada. Todos os elementos mapeados para um mesmo índice são então armazenados na lista encadeada.  

Com essa estratégia, cada elemento armazenado na tabela será  um elemento de uma lista encadeada. Portanto, devemos prever, na estrutura da informação, um ponteiro adicional para o próximo elemento da lista.

## Exemplos em C
Para apresentar a ideia das tabelas de dispersão, vamos considerar um exemplo no qual desejamos armazenar os dados referentes aos alunos de uma disciplina. Cada aluno é individualmente identificado pelo seu número de matrícula. Podemos então usar o número de matrícula como chave de busca do conjunto de alunos armazenados.

- O primeiro exemplo é uma tabela bem simples, só para mostrar a sua funcionalidade, o tratamento do array é usando um vetor circular
- No segundo exemplo eu trouxe um dos jeitos de tratar colisão, que é usando a lista encadeada
-  Já no ultimo exemplo é uma tabela usando vetor dinâmico e o tratamento da lista é como no primeiro