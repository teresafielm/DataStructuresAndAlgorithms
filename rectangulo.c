void rectangulo()
{
    int b;
    int a;
    int x;
    int perimetro;
    system("cls");
    printf("Ingresa la base de tu rectangulo: ");
    scanf("%d",&b);
    printf("\nIngresa la altura de tu rectangulo: ");
    scanf("%d",&a);
    x=a+b;
    perimetro=2*x;
    printf("El perimetro de tu rectángulo es: %d \n",perimetro);
    system("pause");
}
