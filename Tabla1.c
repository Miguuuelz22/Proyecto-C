#include <stdio.h>
#define tam 7
void main(){

    int tabla[tam],i,mayor=-9999,menor=9999;
    for(i=0;i<tam;i++)
    {
        printf("tabla [%d]",i+1);
        scanf("%d",&tabla[i]);
    }
    for(i=0;i<tam;i++)
    {
        if(tabla[i]>mayor)
        {
        mayor = tabla[i];
        }
        if(tabla[i]<menor)
        {
            menor = tabla[i];
        }
    }
    printf("El mayor es %d y el menor es %d\n",mayor,menor);
}