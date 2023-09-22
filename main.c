#include <stdio.h>
#include <math.h>
void main() {
    int a, b;
    char c;
    printf("Vvedite 2 chisla:"); 
    scanf("%d %d", &a, &b);
    printf(" +-*/ ");
    printf("Viberite comandy:"); scanf(" %c", &c);
    switch (c){
        case '+': printf("%d\n", a+b); break;
        case '-': printf("%d\n", a-b); break;
        case '*': printf("%d\n", a*b); break;
        case '/': printf("%d\n", a/b); break;
    }
}