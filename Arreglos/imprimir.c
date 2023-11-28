void imprimir(int arreglo[],int size)
{
    int i;
    system("cls");
    printf("El arreglo almacenado es: \n");
    for(i=0;i<=size-1;i++)
    {
        printf("[%d]: %d\n", i, arreglo[i]);
    }
    system("pause");
}
