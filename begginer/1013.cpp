#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,c,maior;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    
    if(a >= b && a >= c){
        maior = a;
    }
    else if (b>=a && b>=c){
        maior =b;
    }
    else{
        maior =c;
    }
    printf("%d eh o maior\n", maior);
 
    return 0;
}
