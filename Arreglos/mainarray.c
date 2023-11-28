#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include"capturar.c"
#include"ordenar.c"
#include"imprimir.c"


int main()
{
void capturar();
void ordenar();
void imprimir();

    int opcion=0;
    int continuar;
    int i, size;
	printf("¿De qué tamaño deseas tu arreglo? ");
	scanf("%d",&size);
	int arreglo[size];
    int ordenado[size];

	do
	{
	    printf("----1. Capturar valores----.\n");
	    printf("----2. Ordenar valores----.\n");
	    printf("----3. Imprimir valores originales.----\n");
	    printf("----4. Salir\n");
		printf("Selecciona una opción del menú: ");
		scanf("%d",&opcion);
		switch(opcion)
					{
						case 1:
						capturar(arreglo,size);
						break;
						case 2:
                        if(size<=0)
                        {
                            printf("Su arreglo está vacío.");
                        }
                        else
                        for(i=0;i<=size-1;i++)
                        {
                            ordenado[i]=arreglo[i];
                        }
						ordenar(ordenado,size);
						break;
						case 3:
                        if(size<=0)
                        {
                            printf("Su arreglo está vacío.");
                        }
                        else
						imprimir(arreglo,size);
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
