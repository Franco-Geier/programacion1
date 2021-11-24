#define RED          "\x1b[31m"
#define GREEN        "\x1b[32m"
#define YELLOW       "\x1b[33m"
#define BLUE         "\x1b[34m"
#define MAGENTA      "\x1b[35m"
#define CYAN         "\x1b[36m"
#define RESET        "\x1b[0m"
#define LIGHTGREEN   "\x1b[92m"
#define BOLD         "\x1b[1m"

#include <stdio.h>
#include <stdlib.h>


void menuOpciones(int op1, int op2)
{
    system("cls");
    printf(LIGHTGREEN BOLD"\n    VALOR DE LOS OPERANDOS    \n"RESET);
    printf(YELLOW"******************************\n"RESET);
    printf(CYAN"  X = %d\n", op1);
    printf("  Y = %d\n"RESET, op2);
    printf(YELLOW"******************************"RESET);
    printf("\n");

    printf(LIGHTGREEN BOLD"\n             MENU DE OPCIONES             \n"RESET);
    printf(YELLOW"==========================================\n"RESET);
    printf(CYAN"1- Ingresar 1er operando (A = X)\n");
    printf("2- Ingresar 2do operando (B = Y)\n");
    printf("3- Calcular la suma (A + B)\n");
    printf("4- Calcular la resta (A - B)\n");
    printf("5- Calcular la division (A / B)\n");
    printf("6- Calcular la multiplicacion (A * B)\n");
    printf("7- Calcular el factorial (A!)\n");
    printf("8- Calcular todas las operaciones\n");
    printf("9- Salir\n"RESET);
    printf(YELLOW"==========================================\n"RESET);
    printf(MAGENTA"Seleccione un numero del menu: "RESET);
}


void sumar(int op1, int op2)
{
    int cuenta;
    cuenta = op1 + op2;
    printf(GREEN"\nEl resultado de la suma entre %d y %d es: %d\n"RESET, op1, op2, cuenta);
}


void restar(int op1, int op2)
{
    int cuenta;
    cuenta = op1 - op2;
    printf(GREEN"\nEl resultado de la resta entre %d y %d es: %d\n"RESET, op1, op2, cuenta);

}


void dividir(int op1, int op2, float* direccionDeVariableDeRetorno) //direccion de variable donde quiero dejar el resultado de la cuenta
{
    float cuenta;
    
    if(op2 != 0)
    {
        cuenta = (float)op1 / op2;
        (*direccionDeVariableDeRetorno) = cuenta; 
        //con el "*" accedemos al contenido de la variable
        //Interpreta el contenido de la variable como si fuese una direccion, viaja hasta ahi, y almacena el valor de la variable "cuenta"
        printf(GREEN"\nEl resultado de la division entre %d y %d es: %.2f\n"RESET, op1, op2, *direccionDeVariableDeRetorno);
    }
    else
    {
        printf(RED"\nDIVISION IDEFINIDA, NO SE PUEDE DIVIDIR POR CERO\n"RESET);
    }
}


void multiplicar(int op1, int op2)
{
    int cuenta;
    cuenta = op1 * op2;
    printf(GREEN"\nEl resultado de la multiplicacion entre %d y %d es: %d\n"RESET, op1, op2, cuenta);

}


void factorialDeX(int op1, int* direccionDeVariableDeRetorno)
{
    int cuenta = 1;

    if(op1 >= 0 && op1 <= 11)
    {
        for(int i = 1; i <= op1; i++)
        {
            cuenta = cuenta * i;
        }
        *direccionDeVariableDeRetorno = cuenta;
        printf(GREEN"\nEl factorial de %d es: %d\n"RESET, op1, *direccionDeVariableDeRetorno);
    }
    else if(op1 < 0)
    {
        printf(RED"\nINDEFINIDO, HA INGRESADO UN NUMERO NEGATIVO\n"RESET);
    }
    else
    {
        printf(RED"\nNUMERO MUY GRANDE, SE PUEDE INGRESAR HASTA EL NUMERO 11\n"RESET);
    }
}


void todasCuentas(int op1, int op2, int* direccionDeVariableDeRetorno)
{
    sumar(op1, op2);
    restar(op1, op2);
    multiplicar(op1, op2);
    factorialDeX(op1, direccionDeVariableDeRetorno);
}