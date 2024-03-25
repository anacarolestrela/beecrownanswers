#include <iostream>
 
using namespace std;
 
int main() {
 
    double x,y,z,a,b,c;
    
    scanf("%lf",&x);   
    scanf("%lf",&y);    
    scanf("%lf",&z);
    
    if(x < 0 || y<0||z<0)
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if(x > y && x > z)
    {
        a =x;
        if(y>z)
        {
            b=y;
            c=z;
        }
        else
        {
            b=z;
            c=y;
        }
    }
    if(y > z)
    {
        a = y;
        if(x>z)
        {
            b=x;
            c=z;
        }
        else
        {
            b=z;
            c=x;
        }
    }
    else if(x> y)
    {
        a=z;
        b=x;
        c=y;
    }
    else
    {
        a=z;
        b=y;
        c=x; 
    }
    
    if (a > (b + c) || a == (b + c))
    {
        printf("NAO FORMA TRIANGULO\n");
    }
    else if (a*a ==( b*b + c*c))
    {
        printf("TRIANGULO RETANGULO\n");
    }
    else if (a*a > (b*b + c*c))
    {
        printf("TRIANGULO OBTUSANGULO\n");
    }
    else if (a*a < (b*b + c*c))
    {
        printf("TRIANGULO ACUTANGULO\n");
    }
    if (a == b && a==c)
    {
        printf("TRIANGULO EQUILATERO\n");
    }
    
    else if(a==b || c==b)
    {
        printf("TRIANGULO ISOSCELES\n");
    }
 
    return 0;
}
