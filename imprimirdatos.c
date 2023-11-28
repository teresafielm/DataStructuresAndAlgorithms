void imprimirdatos(int sexo[],int cuenta[],int mes[],int turno[],int val)
{
    int x=0,j,k,l,m;
    system("cls");
    printf("Masculino 0, Femenino 1\n");
    printf("Matutino 0, Vespertino 1\n");
    printf("\nLos datos hasta ahora son: \n");
    for(x=0;x<=val-1;x++)
    {

        printf("No. %d. Cuenta: %d - Mes de nacimiento: %d \n",val,cuenta[x],mes[x]);
        printf("Sexo: ");
        printf("%d",sexo[x]);
        printf("\nTurno: ");
        printf("%d\n",turno[x]);
    }
    system("pause");
}
