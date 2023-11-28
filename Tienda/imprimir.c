void imprimir(struct inventario productos[10],int ma, int me,int unidadesme[40],int arreglome[40],int unidadesma[40],int arregloma[40])
{
    int totma,tot,totme,iva,i;
    printf("Cuenta total: \n");
    printf("MAYOREO:\n");
    for(i=0;i<=ma;i++)
    {
        printf("Compra %d: %d unidades, Código: %d, Precio unitario: %d \n",i+1,unidadesma[i],productos[arregloma[i]].codigo,productos[arregloma[i]].precio);
        totma=totma+productos[arregloma[i]].precio;
    }
    printf("MENUDEO: \n");
    for(i=0;i<=me;i++)
    {
        printf("Compra %d: %d unidades, Código: %d, Precio unitario: %d \n",i+1,unidadesme[i],productos[arreglome[i]].codigo,productos[arreglome[i]].precio);
        totme=totme+productos[arreglome[i]].precio;
    }
    tot=totma+totme;
    iva=tot*0.16;
    printf("Su total sin IVA es: %d \n",tot);
    printf("Su total con IVA es: %d \n",iva);
}
