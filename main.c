#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include"menu1.c"
#include"menu2.c"
#include"cuadrilatero.c"
#include"trapecio.c"
#include"esfera.c"
#include"rectangulo.c"
#include"triangulo.c"
#include"circulo.c"

int main()
{
    int opcion=0;
    int continuar;
	do
	{
	    printf("----1. Áreas----\n");
	    printf("----2. Perímetros----\n");
	    printf("----3. Salir----\n\n");
		printf("Selecciona una opción del menú: ");
		scanf("%d",&opcion);
		switch(opcion)
					{
						case 1:
						menu1();
						break;
						case 2:
						menu2();
						break;
						case 3:
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
