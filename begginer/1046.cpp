#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,h;
    
    scanf("%d",&a);
    scanf("%d",&b);
    
    if(b>a)
    {
      h=b-a;  
    }
    else
    {
        h=(24-a)+b;
    }
    printf("O JOGO DUROU %d HORA(S)\n",h);
    return 0;
}
