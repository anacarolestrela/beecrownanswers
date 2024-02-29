#include <iostream>
 
using namespace std;
 
int main() {
 
    int n,s;
    int n100 =0;
    int n50=0;
    int n20=0;
    int n10=0;
    int n5=0;
    int n2=0;
    int n1=0;
    scanf("%d",&n);
    s=n;
    if(n >0 && n<1000000)
    {
        while(n>=100)
        {
         n= n-100;
         n100=n100+1;
        }
        while(n>=50)
        {
         n= n-50;
         n50=n50+1;
        }
        while(n>=20)
        {
         n= n-20;
         n20=n20+1;
        }
        while(n>=10)
        {
         n= n-10;
         n10=n10+1;
        }
        while(n>=5)
        {
         n= n-5;
         n5=n5+1;
        }
        while(n>=2)
        {
         n= n-2;
         n2=n2+1;
        }
        while(n>=1)
        {
         n= n-1;
         n1=n1+1;
        }
        printf("%d\n",s);
        printf("%d nota(s) de R$ 100,00\n",n100);
        printf("%d nota(s) de R$ 50,00\n",n50);
        printf("%d nota(s) de R$ 20,00\n",n20);
        printf("%d nota(s) de R$ 10,00\n",n10);
        printf("%d nota(s) de R$ 5,00\n",n5);
        printf("%d nota(s) de R$ 2,00\n",n2);
        printf("%d nota(s) de R$ 1,00\n",n1);
        
    }
    return 0;
}
