#include <stdio.h>
#define TAM 9

 main()
{
    int num;
    int contadores[TAM];


    for (int i = 0; i < TAM; i++)
    {
        contadores[i]=0;
    }
    

    do{

        printf("\nIntroduzca un número: ");
        scanf("%d",&num);

    }while(num < 0 || num > 9);

    while (num!=0)
    {
        contadores[num-1]++;
        do{
        printf("\nIntroduzca un número: ");
        scanf("%d",&num);
        }while(num < 0 || num > 9);
    }
    
    printf("\n%6s %5s\n","Número","Veces");

    for (int i = 0; i < TAM; i++)
    {
        printf("%6d %5d\n",i+1,contadores[i]);
    }


    
    
}
