#include <iostream>
 
using namespace std;
 
int main() {
 
    double n1,n2,n3,n4,av,exame, mf;
    scanf("%lf",&n1);
    scanf("%lf",&n2);
    scanf("%lf",&n3);
    scanf("%lf",&n4);
    av= (n1*2 +n2*3+n3*4+n4)/10;
    printf("Media: %.1lf\n", av);
    if(av>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else if(av<5.0)
    {
        printf("Aluno reprovado.\n");
    }
    else
    {
        printf("Aluno em exame.\n");
        scanf("%lf",&exame);
        printf("Nota do exame: %.1lf\n", exame);
        mf= (av+ exame)/2;
        if(mf>=5)
        {
            printf("Aluno aprovado.\n");
            printf("Media final: %.1lf\n", mf);

        }
        else        
        {
            printf("Aluno reprovado.\n");
            printf("Media final: %.1lf\n", mf);

        }

    }
 
    return 0;
}
