#include <iostream>
 
using namespace std;
 
int main() {
 
    double x;
    
    scanf("%lf", &x);
    
    if(x<0.00 || x>100.00)
    {
        printf("Fora de intervalo\n");
    }
    else if (x <= 25.00)
    {
        printf("Intervalo [0,25]\n");
    }
    else if(x<=50.00)
    {
        printf("Intervalo (25,50]\n");
    }
    else 
    {
        printf("Intervalo (75,100]\n");
    }
 
    return 0;
}
