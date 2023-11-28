void eliminar(struct carrito productos[5])
	{
			int i=0;
			int eliminacion=0;
			printf("¿Que producto desea eliminar su carrito?");
			printf("\nIngrese 1 para leche\n2 para bolillo\n3 para crema\n4 para tortilla\n5 para queso:");
			scanf("%d",&i);

						printf("Ingresa las unidades de %s",productos[i-1].producto);
						printf(" que deseas eliminar de tu carrito: ");
						scanf("%d",&eliminacion);
						if(eliminacion<=productos[i-1].bodega)
						{
						productos[i-1].valores=productos[i-1].valores-eliminacion;//valores[opcion-1]=valores[opcion-1]-eliminacion;
						productos[i-1].bodega=productos[i-1].bodega+eliminacion;//bodega[opcion-1]=bodega[opcion-1]+eliminacion;
						}
						else
						{
						printf("Lo sentimos, no existen tantos productos en stock.\n");
						}
			}

