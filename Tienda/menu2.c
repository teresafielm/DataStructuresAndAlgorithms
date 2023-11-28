void menu2(int n,struct inventario productos[n]) /* Función donde se ejecuta la lógica del programa */
{
    int ma,me;
    int unidadesme[40];
    int arreglome[40];
    int arregloma[40];
    int unidadesma[40];
    void mayoreo(int ma,int n, struct inventario,int unidadesma[40],int arregloma[40]);
    void menudeo(int me,int n, struct inventario,int unidadesme[40],int arreglome[40]);
    void imprimir(struct inventario,int ma, int me,int unidadesme[40],int arreglome[40],int unidadesma[40],int arregloma[40]);

    int opcionm2=0;
	int continuarm2=0;

	do
	{
	    system("cls");
	    printf("----1. Venta mayoreo.----\n");
	    printf("----2. Venta menudeo.----\n");
	    printf("----3. Imprimir venta.----\n");
        printf("----4. Salir.----\n");
		printf("Selecciona una opción del menú: ");
		scanf("%d",&opcionm2);
		switch(opcionm2)
					{
						case 1:
						mayoreo(ma,n,productos,unidadesma,arregloma);
						break;
						case 2:
						menudeo(me,n,productos,unidadesme,arreglome);
						break;
						case 3:
						imprimir(productos,ma,me,unidadesme,arreglome,unidadesma,arregloma);
                        break;
                        case 4:
                        printf("\n¿Realmente desea salir del programa? Pulse S o s para si y cualquier otra letra para no: ");
                        getchar();
                        scanf("%d",&continuarm2);
                        continuarm2=getchar();
                        break;
                        default:
                        printf("Opción no válida.\n");
                    }
        }

			while(continuarm2!='s'&&continuarm2!='S');
		}
