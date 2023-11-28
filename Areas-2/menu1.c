void menu1(int b,int a, int B,int bt,int h,int r) /* Función donde se ejecuta la lógica del programa */
{
    void cuadrilatero(int b, int a);
    void trapecio(int B,int bt,int h);
    void esfera(int r);

    int opcionm1=0;
	int continuarm1=0;

	do
	{
	    system("cls");
	    printf("----1. Cuadrilatero.----\n");
	    printf("----2. Trapecio.----\n");
	    printf("----3. Esfera.----\n");
	    printf("----4. Salir.----\n");
		printf("Selecciona una opción del menú: ");
		scanf("%d",&opcionm1);
		switch(opcionm1)
					{
						case 1:
						cuadrilatero(b,a);
						break;
						case 2:
						trapecio(B,bt,h);
						break;
						case 3:
						esfera(r);
                        break;
                        case 4:
                        printf("\n¿Realmente desea salir del programa? Pulse S o s para si y cualquier otra letra para no: ");
                        getchar();
                        scanf("%d",&continuarm1);
                        continuarm1=getchar();
                        break;
                        default:
                        printf("Opción no válida.\n");
                    }
        }

			while(continuarm1!='s'&&continuarm1!='S');
		}
