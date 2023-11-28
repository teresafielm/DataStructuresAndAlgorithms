void menu3()
{
    void alta(char nombre,char telefono,int edad);
    void datoscliente(char nombre,char telefono,int edad);

    int opcionm3=0;
	int continuarm3=0;
    int n;
	char nombre[20];
	char telefono[20];
	int edad;

	do
	{
	    printf("----1.Alta cliente----");
	    printf("----2.Imprimir cliente---");
	    printf("----3. Salir----");
	    printf("Selecciona una opción del menú: ");
		scanf("%d",&opcionm3);
		switch(opcionm3)
					{
						case 1:
                        n=n+1;
						alta(nombre,telefono,edad);
						break;
						case 2:
                        if(n!=0)
                        {
                            datoscliente(nombre,telefono,edad);
                        }
                        else
                        printf("Lo sentimos, no está aún registrado.");
						break;
                        case 3:
                        printf("\n¿Realmente desea salir del programa? Pulse S o s para si y cualquier otra letra para no: ");
                        getchar();
                        scanf("%d",&continuarm3);
                        continuarm3=getchar();
                        break;
                        default:
                        printf("Opción no válida.\n");
                    }
	}
    while(continuarm3!='s'&&continuarm3!='S');
}
