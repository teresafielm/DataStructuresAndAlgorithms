#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include"capturardatos.c"
#include"imprimirdatos.c"
#include"edades.c"


int main()
{
void capturardatos();
void ordenedades();
void imprimirdatos();

    int opcion=0;
    int continuar;
    int i,val=0;
    int size=10;
	printf("NOTA: El programa soporta máximo 10 empleados.\n");
	int sexo[10];
    int cuenta[10];
	int edades[10];
	int mes[10];
	int turno[10];

	do
	{
	    printf("\n----1. Capturar datos de la empresa----.\n");
	    printf("----2. Imprimir datos de la empresa----.\n");
	    printf("----3. Capturar las edades de los empleados----\n");
	    printf("----4. Salir----\n");
		printf("Selecciona una opción del menú: ");
		scanf("%d",&opcion);
		switch(opcion)
					{
						case 1:
                        if (val>=9)
                        {
                            printf("Ha excedido el máximo número de empleados.\n");
                        }
                        else
						capturardatos(sexo,cuenta,mes,turno,val);
						val=val+1;
						break;
						case 2:
                        if(val<=0)
                        {
                            printf("Su resgistro está vacío.");
                        }
                        else
                        imprimirdatos(sexo,cuenta,mes,turno,val);
						break;
						case 3:
                        if(size<=0)
                        {
                            printf("Su registro está vacío.");
                        }
                        else
						ordenedades(cuenta,edades,val);
                        break;
                        case 4:
                        printf("\n¿Realmente desea salir del programa? Pulse S o s para si y cualquier otra letra para no: ");
                        getchar();
                        scanf("%d",&continuar);
                        continuar=getchar();
                        break;
                        default:
                        printf("Opción no válida.\n");
                        continuar=0;
                    }
    }
		while(continuar!='s'&&continuar!='S');

return 0;
}
