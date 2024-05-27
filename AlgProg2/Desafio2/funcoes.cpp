#include "cabecalho.h"

void criavetor(int tam, int *vetor) //funcoes dos slides
{
    for (int i = 0; i < tam; i++) 
    {
        vetor[i] = rand();
    }
}

void troca(int &a, int &b) {
    int aux = a;
    a = b;
    b = aux;
}

void selection(int vetor[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (vetor[j] < vetor[min]) {
                min = j;
            }
        }
        if (min != i) {
            troca(vetor[i], vetor[min]);
        }
    }
}

void insertion(int vetor[], int n) {
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && vetor[j-1] > vetor[j]) {
            troca(vetor[j], vetor[j-1]);
            j--;
        }
    }
}

int particao(int vetor[], int comeco, int final)
{
	int laranja = comeco - 1;
	for(int verde = comeco ; verde < final; verde++)
	{
		if(vetor[verde] < vetor[final] )
		{
			laranja++;
			troca(vetor[verde], vetor[laranja]);
		}
	}
	troca(vetor[final], vetor[laranja + 1]);
	return laranja+1;
}
void quicksort(int vetor[], int comeco, int final)
{
	if(comeco <final)
	{
		int posi = particao(vetor, comeco, final);
		quicksort(vetor, comeco , posi-1);
		quicksort(vetor, posi+1 , final);

	}
}


void merge(int *vetor, int esquerda, int meio, int direita) {
    int i, j, k;
    int n1 = meio - esquerda + 1;
    int n2 = direita - meio;

    int *E = (int *)malloc(n1 * sizeof(int));
    int *D = (int *)malloc(n2 * sizeof(int));

    for (i = 0; i < n1; i++)
        E[i] = vetor[esquerda + i];
    for (j = 0; j < n2; j++)
        D[j] = vetor[meio + 1 + j];

    i = 0;
    j = 0;
    k = esquerda;
    while (i < n1 && j < n2) {
        if (E[i] <= D[j]) {
            vetor[k] = E[i];
            i++;
        } else {
            vetor[k] = D[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        vetor[k] = E[i];
        i++;
        k++;
    }

    while (j < n2) {
        vetor[k] = D[j];
        j++;
        k++;
    }

    free(E);
    free(D);
}
void mergeSort(int *vetor, int esquerda, int direita) {
    if (esquerda < direita) {
        int meio = esquerda + (direita - esquerda) / 2;

        mergeSort(vetor, esquerda, meio);
        mergeSort(vetor, meio + 1, direita);

        merge(vetor, esquerda, meio, direita);
    }
}