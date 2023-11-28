void trapecio()
{
    int B;
    int b;
    int h;
    int area;
    system("cls");
    printf("Ingresa la base mayor de tu trapecio: ");
    scanf("%d",&B);
    printf("\nIngresa la base menor de tu trapecio: ");
    scanf("%d",&b);
    printf("\nIngresa la altura de tu trapecio: ");
    scanf("%d",&h);
    area=B*b*h*0.5;
    printf("El área de tu trapecio es: %d \n",area);
    system("pause");
}
