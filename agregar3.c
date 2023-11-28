void agregar(struct carrito productos[5])
		{
			int i=0;
			int adicion=0;
			int *apa;
			int *apb;
			printf("¿Que producto desea agregar a su carrito?");
			printf("\nIngrese 1 para leche\n2 para bolillo\n3 para crema\n4 para tortilla\n5 para queso:");
			scanf("%d",&i);
			apa=&productos[i-1].valores;
			apb=&productos[i-1].bodega;
						printf("Ingresa las unidades de %s",productos[i-1].producto);
						printf(" que deseas agregar a tu carrito: ");
						scanf("%d",&adicion);
						if(adicion<=productos[i-1].bodega)
						{
						*apa=*(apa)+adicion;//valores[opcion-1]=valores[opcion-1]+adicion;
						*apb=*(apb)-adicion;//bodega[opcion-1]=bodega[opcion-1]-adicion;
						}
						else
						{
						printf("Lo sentimos, no existen tantos productos en stock.\n");
						}
			}

