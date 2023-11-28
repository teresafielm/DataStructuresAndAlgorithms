void menu2(int ar,int br,int l1,int l2,int l3,int rc) /* Función donde se ejecuta la lógica del programa */
{
    void rectangulo(int ar,int br);
    void triangulo(int l1,int l2,int l3);
    void circulo(int rc);

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
						rectangulo(ar,br);
						break;
						case 2:
						triangulo(l1,l2,l3);
						break;
						case 3:
						circulo(rc);
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
