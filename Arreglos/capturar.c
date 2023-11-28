void capturar(int arreglo[],int size)
{
    int i;
    int valor;
    system("cls");
    for(i=0;i<=size-1;i++)
    {
        printf("Ingrese el elemento %d del arreglo: ",i);
        scanf("%d",&valor);
        arreglo[i]=valor;
    }
}
