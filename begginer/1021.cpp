#include <iostream>
 
using namespace std;
 
int main() {
 
    double n;
    int n100 =0, n50=0, n20=0, n10=0, n5=0, n2=0;
    int m1=0,m50=0,m25=0,m10=0,m5=0,m01=0;
    scanf("%lf",&n);
    if(n >0 && n<1000000)
    {
        while(n>=100)
        {
            //notas
         n= n-100;
         n100+=1;
        }
        while(n>=50)
        {
         n= n-50;
         n50+=1;
        }
        while(n>=20)
        {
         n= n-20;
         n20+=1;
        }
        while(n>=10)
        {
         n= n-10;
         n10+=1;
        }
        while(n>=5)
        {
         n= n-5;
         n5+=1;
        }
        while(n>=2)
        {
         n= n-2;
         n2+=1;
        }
        while(n>=1)
        {
         n= n-1;
         m1+=1;
        }

        n=n*100;
        while (n>=50)
        {
            n-=50;
            m50+=1;

        }
        while (n>=25)
        {
            n-=25;
            m25+=1;

        }
        while (n>=10)
        {
            n-=10;
            m10+=1;
        }
        while (n>=5)
        {
            n-=5;
            m5+=1;
        }
        while (n>=1)
        {
            n-=1;
            m01+=1;
        }
                printf("NOTAS:\n");
        printf("%d nota(s) de R$ 100.00\n",n100);
        printf("%d nota(s) de R$ 50.00\n",n50);
        printf("%d nota(s) de R$ 20.00\n",n20);
        printf("%d nota(s) de R$ 10.00\n",n10);
        printf("%d nota(s) de R$ 5.00\n",n5);
        printf("%d nota(s) de R$ 2.00\n",n2);
        printf("MOEDAS:\n");
        printf("%d moeda(s) de R$ 1.00\n",m1);
        printf("%d moeda(s) de R$ 0.50\n",m50);
        printf("%d moeda(s) de R$ 0.25\n",m25);
        printf("%d moeda(s) de R$ 0.10\n",m10);
        printf("%d moeda(s) de R$ 0.05\n",m5);
        printf("%d moeda(s) de R$ 0.01\n",m01);
 
    }
    return 0;
}
