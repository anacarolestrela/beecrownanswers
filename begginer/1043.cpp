#include <iostream>
 
using namespace std;
 
int main() {
 
    double a,b,c,perimetro,area;
    scanf("%lf\n",&a);
    scanf("%lf\n",&b);
    scanf("%lf\n",&c);
    
   if (a+b>c && a+c>b && b+c>a)
   {
       
       perimetro= a+b+c;
       printf("Perimetro = %.1lf\n",perimetro);
   }
   else
   {
        area = ((a+b)*c)/2;
        printf("Area = %.1lf\n",area);

   }
 
    return 0;
}
