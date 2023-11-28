void llenarproductos(int n, struct inventario productos[n])
{
    int i;
    char nombrex[30];
    int c;


    for(i=0;i<=n-1;i++)
    {
        printf("Ingresa el nombre del producto %d",i+1);
        scanf("%s",&nombrex);
        productos[i].nombre=nombrex;
        printf("Ingresa el código del producto %d",i+1);
        scanf("%d",&c);
        productos[i].codigo=c;
        printf("Ingresa el anaquel del producto %d",i+1);
        scanf("%d",&c);
        productos[i].anaquel=c;
        printf("Ingresa el precio del producto %d",i+1);
        scanf("%d",&c);
        productos[i].precio=c;
    }
}
