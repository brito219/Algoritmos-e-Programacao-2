#include <stdio.h>
 
int main() {
 
    int number, wh;
    double salary;
 
    scanf("%d\n%d\n%lf", &number, &wh, &salary);
    printf("NUMBER = %d\n", number);
    printf("SALARY = U$ %.2f", wh*salary);
    
    
    return 0;
}