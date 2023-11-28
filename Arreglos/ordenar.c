void ordenar(int arreglo[],int size)
{
    int auxi[size];
    int i, j, n, aux;
    n =size;
    system("cls");
    for(i=1; i<n; i++)
    {
        j = i;
        aux = arreglo[i];
        while(j>0 && aux<arreglo[j-1])
        {
            arreglo[j] = arreglo[j-1];
            j=j-1;
        }
        arreglo[j] = aux;
    }
    printf("Los elementos ordenados son: \n");
    for(i=0; i<n; i++)
    {
        printf("[%d]: %d\n", i, arreglo[i]);
    }
    for(i=0;i<=size-1;i++)
    {
        arreglo[i]=auxi[i];
    }
    system("pause");
}
