#include <stdio.h>
#include <stdlib.h>
struct celula{

    int valor;
    celula *prox;

};
void imprime_reverso(celula *lst)
{
    celula *p;
    for( p = lst; p != NULL; p=p->prox )
    {
        printf("%d\n", p->valor);
    }

}
void empilhar(int x, celula *&lst)
{
 celula *nova;
 nova = (celula *) malloc(sizeof (celula));
 nova->valor = x;
 nova->prox = lst;
 lst = nova;
}
int main()
{
    celula *lst;
    lst = NULL;
    int num = 0;
    do
    {
        
        scanf("%d ", &num);
        if(num >= 0)
        {
            
            empilhar(num, lst);
        }
    } while (num >= 0);
    imprime_reverso(lst);
    
}