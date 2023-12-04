#include <stdio.h>
#define tam 5
void main(){
    int tabla[tam],i,resultado=0;
    for(i=0;i<tam;i++)
    {
        
        printf("Tabla [%d]",i+1);
        scanf("%d",&tabla[i]);
    }
    for(i=0;i<tam;i++)
    {
        if(tabla[i]% 2==0)
        {
            resultado+=tabla[i];
        }
        else
        {
            resultado-=tabla[i];
        }
    }
    printf("El resultado es %d\n",resultado);
}