void menu2(void) /* Función donde se ejecuta la lógica del programa */
{
    void rectangulo();
    void triangulo();
    void circulo();

    int opcionm2=0;
	int continuarm2=0;

	do
	{
	    system("cls");
	    printf("----1. Rectángulo.----\n");
	    printf("----2. Triángulo.----\n");
	    printf("----3. Círculo.----\n");
        printf("----4. Salir.----\n");
		printf("Selecciona una opción del menú: ");
		scanf("%d",&opcionm2);
		switch(opcionm2)
					{
						case 1:
						rectangulo();
						break;
						case 2:
						triangulo();
						break;
						case 3:
						circulo();
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
