# Fila em C
Este código consiste em uma implementação básica de uma fila em C, utilizando estruturas de dados e alocação dinâmica de memória.
## Estrutura do Código
O código é composto pelos seguintes elementos:

- `typedef struct No`: define a estrutura de um nó da fila, que contém um valor inteiro e um ponteiro para o próximo nó.
- `typedef struct Fila`: define a estrutura da fila, que possui um ponteiro para o início e para o fim da fila, bem como o tamanho da fila.
- `void IniciaFila(Fila *f)`: inicializa a fila, definindo o início, o fim e o tamanho como nulos (0).
- `int Vazia(Fila *f)`: verifica se a fila está vazia, retornando 1 se estiver vazia ou 0 caso contrário.
- `void Enfileira(Fila *f, int x)`: insere um elemento no final da fila, alocando um novo nó e atualizando o início, o fim e o tamanho da fila.
- `int primeiro(Fila *f)`: retorna o valor do primeiro elemento da fila.
- `int Desenfileira(Fila *f)`: remove o primeiro elemento da fila, atualizando o início, o tamanho e liberando a memória do nó removido. Retorna o valor do elemento removido ou 0 se a fila estiver vazia.
- `int Tamanho(Fila *f)`: retorna o tamanho da fila.
## Como Utilizar
Para utilizar a implementação da fila em C, basta compilar o código-fonte utilizando um compilador C e executar o arquivo gerado. O usuário poderá realizar as seguintes operações:

- **Inserir**: insere um elemento na fila, informando um valor inteiro. Após a operação, a mensagem "inserido" será exibida.
- **Remover**: remove o primeiro elemento da fila e exibe o seu valor na tela. Se a fila estiver vazia, a mensagem "fila vazia!" será exibida.
- **Consultar o primeiro elemento**: exibe o valor do primeiro elemento da fila, sem removê-lo.
- **Consultar o tamanho da fila**: exibe o tamanho atual da fila.
- **Sair**: encerra o programa.
