#include <stdio.h>
#define tam 10
void main(){
    int temperatura[tam],i,temperaturaMasCalor=-9999,temperaturaMasFrio=9999,diaMasCalor,DiaMasFrio;
    for(i=0;i<tam;i++)
    {
        printf("Digite la temperatura del dia %d septiembre: ",i+1);
        scanf("%d",&temperatura[i]);
    }
    for(i=0;i<tam;i++)
    {
            if(temperatura[i]>temperaturaMasCalor)
            {
                temperaturaMasCalor = temperatura[i];
                diaMasCalor = i;
            }
            if(temperatura[i]<temperaturaMasFrio)
            {
                temperaturaMasFrio = temperatura[i];
                DiaMasFrio = i;
            }
    }
        printf("La temperatura mas alta fue %d grados y el dia fue %d\n",temperaturaMasCalor,diaMasCalor+1);
        printf("La temperatura mas fria fue %d grados y el dia fue %d\n",temperaturaMasFrio,DiaMasFrio+11);
}