#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include"menu1.c"
#include"menu2.c"
#include"struct.c"
#include"mayoreo.c"
#include"menudeo.c"
#include"imprimir.c"
#include"menu3.c"
#include"alta.c"
#include"datoscliente.c"

int main()
{
    void llenarproductos(int n,struct inventario);
    void menu1(int n,struct inventario);
    void menu2(int n,struct inventario);
    void menu3();

    int opcion=0;
    int continuar;
    int n;
    printf("Ingresa el número de productos a ingresar: ");
    scanf("%d",&n);

    struct inventario{
	char nombre[30];
	int codigo;
	int anaquel;
	int precio;
    }productos[n];

	llenarproductos(n,productos);
	do
	{
	    printf("----1. Inventario----\n");
	    printf("----2. Venta----\n");
	    printf("----3. Cliente----\n");
	    printf("----4. Salir----\n");
		printf("Selecciona una opción del menú: ");
		scanf("%d",&opcion);
		switch(opcion)
					{
						case 1:
						menu1(n,productos);
						break;
						case 2:
						menu2(productos,n);
						break;
						case 3:
                        menu3();
                        break;
						case 4:
                        printf("\n¿Realmente desea salir del programa? Pulse S o s para si y cualquier otra letra para no: ");
                        getchar();
                        scanf("%d",&continuar);
                        continuar=getchar();
                        break;
                        default:
                        printf("Opción no válida.\n");
                        continuar='s';
                    }
		}
		while(continuar!='s'&&continuar!='S');
}
