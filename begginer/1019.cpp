#include <iostream>
 
using namespace std;
 
int main() {
 
    int n;
    int h=0;
    int m=0;
    int s=0;
    
    scanf("%d",&n);
    while(n>=3600)
    {
        n-=3600;
        h+=1;
    }
    while(n>=60)
    {
        n-=60;
        m+=1;
    }
    s=n;
    printf("%d:%d:%d\n",h,m,s);
    
 
    return 0;
}
