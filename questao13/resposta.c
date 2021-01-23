#include <stdio.h>
#include <stdlib.h>

void bubble_sort(float* array, unsigned int N);

int main(void)
{
    unsigned int N;
    float* array;

    // Obtém a dimensão do vetor
    printf("Digite a dimensao do array (> 0): ");
    do
    {
        scanf("%d", &N);
    }
    while(N <= 0);
    
    // Aloca memória que será utilizada pelo array
    array = malloc(N * sizeof(float));

    // Obtém os valores do array
    printf("Digite %d valores reais seguidos de Enter:\n", N);
    for (unsigned int i = 0; i < N; i++)
    {
        scanf("%f", &array[i]);
    }

    // Chama função de ordenação do array
    bubble_sort(array, N);

    // Imprime os valores do array ordenado
    printf("Os valores digitados em ordem crescente sao:\n");
    for (unsigned int i = 0; i < N; i++)
    {
        printf("%.01f ", array[i]);
    }

    // Libera a memória utilizada pelo array
    free(array);
}

// Função para ordenação do array
void bubble_sort(float* array, unsigned int N)
{
    int swap_counter = -1;
    float aux = 0.0;

    do
    {
        swap_counter = 0;
        for (unsigned int i = 0; i < (N - 1); i++)
        {
            if (array[i] > array[i + 1])
            {
                aux = array[i];
                array[i] = array[i + 1];
                array[i + 1] = aux;
                swap_counter++;
            }
        }
    }
    while(swap_counter != 0);
}