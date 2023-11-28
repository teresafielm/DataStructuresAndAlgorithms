void listado(struct carrito productos [5])
	{
		int i=0;
		int cuenta=0;
		printf("En seguida se enlistaran tus productos con la cantidad que llevas agregada en el carrito,\n");
		printf("el valor en pesos de cada uno, y el total de tu cuenta hasta ahora\n");
		for ( i=0; i<5; i++ )
		{
			if(productos[i].valores!=0)
{

            printf("%s marca %s (%s): \tLote: %d\tCaducidad: %d",productos[i].producto,
            productos[i].marca,
            productos[i].contenido,
            productos[i].lote,
            productos[i].caducidad);
			printf("\n");
			printf("%d\t%d\t%d\n",productos[i].valores,productos[i].precios,productos[i].valores*productos[i].precios);

			cuenta=cuenta+productos[i].valores*productos[i].precios;

		}
else
{
printf("\n");
}
}
		printf("\nEl total de tu cuenta es de: %d",cuenta);
}
