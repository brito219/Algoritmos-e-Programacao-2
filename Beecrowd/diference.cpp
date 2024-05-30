#include <stdio.h>
 
int main() {
 
    int a, b, c, d;
    int prodab, prodcd;
    int dif;
    
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    
    prodab = a * b;
    prodcd = c * d;
    dif = prodab - prodcd;
    
    printf("DIFERENCA = %d\n", dif);
 
    return 0;
}