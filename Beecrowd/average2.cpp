#include <stdio.h>
 
int main() {
 
 double a, b, c;
 double media;
 
 scanf("%lf\n%lf\n%lf", &a, &b, &c);
 media = (a*2 + b*3 + c*5)/10.0;
 printf("MEDIA = %.1f\n", media);
 
    return 0;
}