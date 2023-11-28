void menu1(int n, struct inventario productos[n]) /* Función donde se ejecuta la lógica del programa */
{
    int i;
    int opcionm1=0;
	int continuarm1=0;

	do
	{
	    for ( i=0; i<5; i++ )
		{

            printf("%s Código: %d  Anaquel: %d Precio (SIN IVA): $ %d ",productos[i].nombre,productos[i].codigo,
            productos[i].anaquel,
            productos[i].precio,
            productos[i].lote,
            productos[i].caducidad);
			printf("\n");

	    printf("\n¿Desea salir del inventario? Pulse S o s para si y cualquier otra letra para no: ");
        getchar();
        scanf("%d",&continuarm1);
        continuarm1=getchar();
        }
	}
    while(continuarm1!='s'&&continuarm1!='S');
}
