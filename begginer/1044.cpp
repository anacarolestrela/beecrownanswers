#include <iostream>
 
using namespace std;
 
int main() {
 
   int a,b;
   
   scanf("%d",&a);
   scanf("%d",&b);
   
   if(a>b)
   {
       if(a % b == 0)
       {
           printf("Sao Multiplos\n");
       }
       else
       {
            printf("Nao sao Multiplos\n");
       }
   }
   else if(b % a == 0)
    {
        printf("Sao Multiplos\n");
    }
    else
    {
        printf("Nao sao Multiplos\n");
    }
    if(a == b)
    {
           printf("Sao Multiplos\n");
    }
    return 0;
}
