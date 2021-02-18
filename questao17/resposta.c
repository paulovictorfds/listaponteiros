#include <stdio.h>
#include <stdlib.h>

void somaarrays(int *array1, int *array2, int *resul, unsigned int N);

int main(void)
{
    unsigned int N;
    int *array1, *array2, *resul;

    // Obtém a dimensão do array
    printf("Digite a dimensao do array (> 0): ");
    do
    {
        scanf("%d", &N);
    }
    while(N <= 0);

    // Aloca memória que será utilizada pelos arrays
    array1 = malloc(N * sizeof(float));
    array2 = malloc(N * sizeof(float));
    resul = malloc(N * sizeof(float));

    // Obtém os valores primeiro do array
    printf("Digite %d valores inteiros correspondentes ao primeiro array:\n", N);
    for (unsigned int i = 0; i < N; i++)
    {
        scanf("%d", &array1[i]);
    }

    // Obtém os valores do segundo array
    printf("Digite %d valores inteiros correspondentes ao primeiro array:\n", N);
    for (unsigned int i = 0; i < N; i++)
    {
        scanf("%d", &array2[i]);
    }

    // Chama função soma arrays
    somaarrays(array1, array2, resul, N);

    // Imprime os valores do array de soma
    printf("O array soma dos arrays digitados sao:\n");
    for (unsigned int i = 0; i < N; i++)
    {
        printf("%d ", resul[i]);
    }

    // Libera memória alocada para os arrays
    free(array1);
    free(array2);
    free(resul);
}

void somaarrays(int *array1, int *array2, int *resul, unsigned int N)
{
    for (unsigned int i = 0; i < N; i++)
    {
        resul[i] = array1[i] + array2[i];
    }
}