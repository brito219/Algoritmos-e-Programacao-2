#include "cabecalho.h"

int main() {
    int tam;
    clock_t inicio, fim; //variaveis de inicio e fim do tempo
    double tempo;

    printf("Tamanho do vetor: ");
    scanf("%d", &tam);
    int *vetor = (int *)calloc(tam, sizeof(int));
    if (vetor == NULL) 
    {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    criavetor(tam, vetor); //calculo tempo do selection
    inicio = clock(); 
    selection(vetor, tam);
    fim = clock(); 
    tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo de execucao do Selecton Sort: %f segundos\n", tempo);

    criavetor(tam, vetor); //calculo tempo do insertion
    inicio = clock(); 
    insertion(vetor, tam);
    fim = clock();
    tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo de execucao do Insertion Sort: %f segundos\n", tempo);

    criavetor(tam, vetor); //calcula tempo merge
    inicio = clock(); 
    mergeSort(vetor,0, tam -1);
    fim = clock(); 
    tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo de execucao do Merge Sort: %f segundos\n", tempo);

    criavetor(tam, vetor); //calcula tempo quick
    inicio = clock(); 
    quicksort(vetor, 0, tam-1);
    fim = clock(); 
    tempo = ((double) (fim - inicio)) / CLOCKS_PER_SEC;
    printf("Tempo de execucao do Quick Sort: %f segundos\n", tempo);

    free(vetor); //libera memoria
    return 0;
}