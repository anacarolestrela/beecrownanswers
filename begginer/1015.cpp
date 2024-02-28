#include <iostream>
#include <math.h>
 
using namespace std;
 
int main() {
 
    double xa,ya,xb,yb,d;
    scanf("%lf",&xa);
    scanf("%lf",&ya);
    scanf("%lf",&xb);
    scanf("%lf",&yb);
    
    d = sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya));
    printf("%.4lf\n", d);
    
    return 0;
}
