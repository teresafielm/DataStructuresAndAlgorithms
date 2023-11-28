void menudeo(int me,int n, struct inventario productos[n],int unidadesme[40],int arreglome[40])
{
    int i,j,x,y,o;
    int val2,val3;
    int comp[n];
    int val;
    for(i=0;i<=n-1;i++)
    {
        comp[i]=productos[i].codigo;
    }
    printf("Ingresa el código del producto: ");
    scanf("%d",&val);
    for(j=0;i<=n-1;i++)
    {
        if(comp[j]==val)
        {
            x=j;
            arreglome[me]=x;
            j=n;
            o=1;
        }
        else
        {
            o=0;
        }
    }
    if(o==1)
    {
        printf("Producto encontrado: ");
        val2=productos[j].precio*0.16;
        val3=val2+productos[j].precio;
        prinf("Código: %d. %s PRECIO CON IVA: $ %d ",productos[j].codigo,productos[j].precio,val3);
        printf("¿Cuántas unidades deseas comprar?");
        scanf("%d",&y);
        if(y<=10)
        {
            unidadesme[me]=y;
            printf("Las unidades son menores o iguales a 10, compra aceptada.");
            me=me+1;
        }
        else
        {
            printf("Lo sentimos, no vendemos menos de 10 unidades como mayoreo.");
        }
    }
    else
    {
        printf("Producto no encontrado en el inventario");
    }
}
