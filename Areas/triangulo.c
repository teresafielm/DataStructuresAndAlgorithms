void triangulo()
{
    int l1;
    int l2;
    int l3;
    int perimetro;
    system("cls");
    printf("Ingresa el lado 1 de tu triángulo: ");
    scanf("%d",&l1);
    printf("Ingresa el lado 2 de tu triángulo: ");
    scanf("%d",&l2);
    printf("Ingresa el lado 3 de tu triángulo: ");
    scanf("%d",&l3);
    perimetro=l1+l2+l3;
    printf("El perimetro de tu triángulo es: %d \n",perimetro);
    system("pause");
}
