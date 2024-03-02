#include <iostream>
#include <math.h>

using namespace std;
 
int main() {
 
    double a,b,c,x1,x2,delta;
    scanf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);
    if(a==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        delta =b*b-(4*a*c);
        if(delta<0)
        {
            printf("Impossivel calcular\n");
        }
        else
        {   
            x1= (b*-1 + sqrt(delta))/(2*a);
            x2= (b*-1 - sqrt(delta))/(2*a);
            printf("R1 = %.5lf\n",x1);
            printf("R2 = %.5lf\n",x2);
        }
    }
 
    return 0;
}
