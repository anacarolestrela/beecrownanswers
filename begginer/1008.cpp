#include <iostream>
 
using namespace std;
 
int main() {
 
    int n, h;
    double s, salary;
    scanf("%d",&n);
    scanf("%d", &h);
    scanf("%lf", &s);
    salary = s * h;
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", n,salary);
 
    return 0;
}
