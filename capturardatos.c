void capturardatos(int sexo[],int cuenta[],int mes[],int turno[],int val)
{
    int cap=0;
    int cap2=0;
    printf("Ingresa el número de cuenta del empleado: ");
    scanf("%d",&cuenta[val]);
    printf("Ingresa el mes de nacimiento del empleado: ");
    scanf("%d",&mes[val]);
    while(cap!=1)
    {
        printf("Ingresa el sexo del empleado (0 para Masculino, 1 para Femenino): ");
        scanf("%d",&cap);
        if(cap==0)
        {
            sexo[val]=cap;
            cap=1;
        }
        else if(cap==1)
        {
            sexo[val]=cap;
        }
    }
    while(cap2!=1)
    {
        printf("Ingresa el turno del empleado (0 para Matutino, 1 para Vespertino): ");
        scanf("%d",&cap2);
        if(cap2==0)
        {
            turno[val]=cap2;
            cap2=1;
        }
        else if(cap2==1)
        {
            turno[val]=cap2;
        }
    }
}
