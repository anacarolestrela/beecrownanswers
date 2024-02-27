#include <iostream>
 
using namespace std;
 
int main() {
    int code,qnt;
    float price, valor;
    
    scanf("%d", &code);
    scanf("%d", & qnt);
    scanf("%f", &price);
    valor=qnt *price;
    scanf("%d", &code);
    scanf("%d", & qnt);
    scanf("%f", &price);
    valor+=qnt *price;
 
    printf("VALOR A PAGAR: R$ %.2f\n",valor);
 
    return 0;
}
