<h1  align="center"> Quick Sort</h1>

<p>
É um algoritmo de divisão e conquista. Ele escolhe um elemento como pivô e particiona o array fornecido ao redor do pivô escolhido. Existem muitas versões diferentes do quickSort que selecionam o pivô de maneiras diferentes.

1.  Sempre escolha o primeiro elemento como pivô.
2.  Sempre escolha o último elemento como pivô (implementado abaixo)
3.  Escolha um elemento aleatório como pivô.
4.  Escolha a mediana como pivô.

O principal processo no quickSort é a partição. O destino das partições é, dado uma matriz e um elemento x da matriz como pivô, colocar esse x em sua posição correta na matriz classificada e colocar todos os elementos menores (menores que x) antes de x, e colocar todos os elementos maiores (maiores que x) depois de x. Tudo isso deve ser feito em tempo linear.
</p>

## Tempo de execução

<p>
Pior caso: o pior caso ocorre quando o processo de partição sempre escolhe o maior ou o menor elemento como pivô. Tempo de execução de O(n²)

Melhor caso: o melhor caso ocorre quando o processo de partição sempre escolhe o elemento do meio como pivô. Tempo de execução de O(nLogn).
</p>
