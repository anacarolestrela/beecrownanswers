#include <iostream>
 
using namespace std;
 
int main() {
 
    char nome[100];
    double salary, sales,total;
    scanf("%s", &nome);
    scanf("%lf", &salary);
    scanf("%lf", &sales);
    total = salary + sales*0.15;
    printf("TOTAL = R$ %.2lf\n",total);
 
    return 0;
}
