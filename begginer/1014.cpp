#include <iostream>
 
using namespace std;
 
int main() {
 
    int x;
    double y, kpl;
    
    scanf("%d", &x);
    scanf("%lf", &y);
    kpl = x/y;
    printf("%.3lf km/l\n", kpl);
 
    return 0;
}
