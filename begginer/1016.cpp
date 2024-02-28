#include <iostream>
 
using namespace std;
 
int main() {
 
    int km, min,d;
    scanf("%d",&km);
    while(d!=km)
    {   
        d++;
        min+=2;    
    }
    
    printf("%d minutos\n",min);
 
    return 0;
}
