#include <iostream>
 
using namespace std;
 
int main() {
 
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if(b>c && d>a)
    {
        if(c+d > a+b)
        {
          if(c>0 &&d>0)
          {
              if(a % 2 == 0)
              {
                  printf("Valores aceitos\n");
              }
              else
              printf("Valores nao aceitos\n");
          }
          else
          printf("Valores nao aceitos\n");
        }
        else
        printf("Valores nao aceitos\n");
    }
    else
    printf("Valores nao aceitos\n");
 
    return 0;
}
