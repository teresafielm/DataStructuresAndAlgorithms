void ordenedades(int cuenta[],int edades[],int val)
{
    int i,j,aux;
    int a=0, b=0, c=0;
    int s=0;
    int comp[val];
    for(i=0;i<=val;i++)
    {
        while(s!=1)
        {
            printf("Ingresa la edad de %d (cuenta): ",cuenta[i]);
            scanf("%d",&aux);
            if(aux<18)
            {
                s=0;
            }
            else
            if(s>65)
            {
                s=0;
            }
            else
            {
                printf("Edad aceptada.");
                aux=edades[i];
                comp[i]=edades[i];
                s=1;
            }
        }
    }
    for(j=0;j<=val;j++)
    {
        if(comp[j]<=21)
        {
            a=a+1;
        }
        else
        {
            if(comp[j]<=50)
            {
                b=b+1;
            }
            else
            c=c+1;
        }
    }
    printf("Hay %d empleados menores de 22 años.\n",a);
    printf("Hay %d empleados entre 23 y 50 años.\n",b);
    printf("Hay %d empleados mayores de 50 años.\n",c);
}
