#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b);

int main(void)
{
    unsigned int N;
    float* array;

    // Obtém a dimensão do array
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
    qsort(array, N, sizeof(int), compare);

    // Imprime os valores do array ordenado
    printf("Os valores digitados em ordem crescente sao:\n");
    for (unsigned int i = 0; i < N; i++)
    {
        printf("%.01f ", array[i]);
    }

    // Libera a memória utilizada pelo array
    free(array);
}

int compare (const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}