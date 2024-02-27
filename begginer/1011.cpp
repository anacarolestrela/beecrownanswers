#include <iostream>
 
using namespace std;
 
int main() {
 
    double  raio, volume;
    double pi = 3.14159;
    scanf("%lf",&raio);
    volume =(4/3.00) * pi * raio * raio *raio;
    printf("VOLUME = %.3lf\n",volume);
    
    return 0;
}
