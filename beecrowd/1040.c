#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    scanf("%f%f%f%f",&a,&b,&c,&d);
    e=(2*a+b*3+c*4+d);
    printf("Media:%.1f\n",e);
    if(e>=7.0){printf("Aluno aprovado.\n");}
    else if(e<5.0){printf("Aluno reprovado.\n");}
    else if(e>=5.0&&e<=6.9){printf("Aluno em exame.\n");
    float f,g;
    scanf("%f",&f);
    printf("Nota do exame:%.1f\n",f);
    g=(e+f)/2.0;
    if(g>=5.0){printf("Aluno aprovado.\n");}
    else printf("Aluno reprovado.\n");}

    printf("Media final:%.1f\n",g);
}
    return 0;
}
