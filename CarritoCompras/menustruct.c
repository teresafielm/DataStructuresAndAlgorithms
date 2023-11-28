void menu(void) /* Función donde se ejecuta la lógica del programa */
{
void menu();
void agregar();
void eliminar();
void listado();
struct carrito productos[5];
void (*apAgregar)()=&agregar;
void (*apEliminar)()=&eliminar;
void(*apListado)()=&listado;
strcpy(productos[0].producto,"Leche");
strcpy(productos[1].producto,"Bolillo");
strcpy(productos[2].producto,"Crema");
strcpy(productos[3].producto,"Tortilla");
strcpy(productos[4].producto,"Queso");
strcpy(productos[0].marca,"Alpura");
strcpy(productos[1].marca,"Lecaroz");
strcpy(productos[2].marca,"Lala");
strcpy(productos[3].marca,"Tia Rosa");
strcpy(productos[4].marca,"FUD");
strcpy(productos[0].contenido,"1 litro");
strcpy(productos[1].contenido,"1 pieza");
strcpy(productos[2].contenido,"250g");
strcpy(productos[3].contenido,"12 pcs");
strcpy(productos[4].contenido,"12 rebanadas");
productos[0].lote=12434;
productos[1].lote=23357;
productos[2].lote=49746;
productos[3].lote=69268;
productos[4].lote=59270;
productos[0].caducidad=200717;
productos[1].caducidad=100317;
productos[2].caducidad=300417;
productos[3].caducidad=230517;
productos[4].caducidad=120317;
productos[0].valores=0;
productos[1].valores=0;
productos[2].valores=0;
productos[3].valores=0;
productos[4].valores=0;
productos[0].bodega=24;
productos[1].bodega=45;
productos[2].bodega=12;
productos[3].bodega=60;
productos[4].bodega=20;
productos[0].precios=12;
productos[1].precios=2;
productos[2].precios=14;
productos[3].precios=1;
productos[4].precios=18;
	int opcion=0;
	int continuar;
	printf("Bienvenidos a Lucky Aide\n\n");
	printf("Tenemos leche, bolillo, crema, tortilla y queso.\n");
	printf("Usted tiene un carrito en el cual puede agregar, eliminar,\nsacar el listado y la cuenta de sus productos actuales en el carro.");

	do
	{
		printf("\n\nIngresa:\n1 para agregar un producto a tu carro.\n2 para eliminar el producto de tu carro.");
		printf("\n3 para listar tus productos dentro del carro.\ny sacar el total de tu cuenta.\n: ");
		scanf("%d",&opcion);

		switch(opcion)
					{
						case 1:
						apAgregar(productos);
						break;
						case 2:
						apEliminar(productos);
						break;
						case 3:
						apListado(productos);
						break;

			default:
			printf("Opción no válida.\n");
					}
			printf("\n¿Desea continuar comprando? Pulse cualquier tecla para si y N o n para no: ");
			getchar();
			scanf("%d",&continuar);
			continuar=getchar();

	}

			while(continuar!='n'&&continuar!='N');
		}

