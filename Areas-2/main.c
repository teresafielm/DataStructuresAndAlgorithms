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
    void menu1(int b,int a, int B,int bt,int h,int r);
    void menu2(int ar,int br,int l1,int l2,int l3,int rc);

    int opcion=0;
    int continuar;

	int b;
    int a;
    int B;
    int bt;
    int h;
    int r;
    int rc;
    int br;
    int ar;
    int l1;
    int l2;
    int l3;

    printf("Ingresa la base de tu cuadrilatero: ");
    scanf("%d",&b);
    printf("\nIngresa la altura de tu cuadrilatero: ");
    scanf("%d",&a);
    printf("Ingresa la base mayor de tu trapecio: ");
    scanf("%d",&B);
    printf("\nIngresa la base menor de tu trapecio: ");
    scanf("%d",&bt);
    printf("\nIngresa la altura de tu trapecio: ");
    scanf("%d",&h);
    printf("Ingresa el radio de tu esfera: ");
    scanf("%d",&r);
    printf("Ingresa la base de tu rectangulo: ");
    scanf("%d",&b);
    printf("\nIngresa la altura de tu rectangulo: ");
    scanf("%d",&a);
    printf("Ingresa el lado 1 de tu triángulo: ");
    scanf("%d",&l1);
    printf("Ingresa el lado 2 de tu triángulo: ");
    scanf("%d",&l2);
    printf("Ingresa el lado 3 de tu triángulo: ");
    scanf("%d",&l3);
    printf("Ingresa el radio de tu círculo: ");
    scanf("%d",&r);

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
						menu1(b,a,B,bt,h,r);
						break;
						case 2:
						menu2(ar,br,l1,l2,l3,rc);
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
