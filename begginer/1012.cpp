#include <iostream>
 
using namespace std;
 
int main() {
 
    double a,b,c,TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;
    double pi = 3.14159;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    TRIANGULO = (a * c)/2.00;
    CIRCULO = pi * c *c;
    TRAPEZIO = (a+b)/2.00 *c;
    QUADRADO = b*b;
    RETANGULO = a * b;
    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO);
    return 0;
}
