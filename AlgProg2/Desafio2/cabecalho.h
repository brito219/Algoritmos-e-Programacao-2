#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void troca(int &a, int &b);
void selection(int vetor[], int n); 
void insertion(int vetor[], int n); 
void criavetor(int tam, int *vetor);
int particao(int vetor[], int comeco, int final); 
void quicksort(int vetor[], int comeco, int final); 
void merge(int *vetor, int esquerda, int meio, int direita); 
void mergeSort(int *vetor, int esquerda, int direita); 