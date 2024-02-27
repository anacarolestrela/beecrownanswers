#include <iostream>
 
using namespace std;
 
int main() {
 
    double a, b, c, media;
    scanf("%lf", &a);
    scanf("%lf", &b);
    scanf("%lf", &c);
    media = (2*a + 3*b + 5*c) / 10;
    printf("MEDIA = %.1lf\n", media);
    return 0;
}
