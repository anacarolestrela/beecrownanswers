#include <iostream>
 
using namespace std;
 
int main() {
 
    int age;
    int a=0;
    int m=0;
    int d=0;
    scanf("%d",&age);
    while(age>=365)
    {
        age-=365;
        a+=1;
    }
    while(age>=30)
    {
        age-=30;
        m+=1;
    }
    d=age;
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",a,m,d);
 
    return 0;
}
