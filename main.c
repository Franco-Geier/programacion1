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
#include "funciones.h"

int main()
{
    char seguir = 's';
    int num1 = 0;
    int num2 = 0;  
    int opcion = 0;
    float resultadoFloat;
    int resultadoInt;

    while(seguir == 's')
    {   

        menuOpciones(num1, num2);

        fflush(stdin);
        scanf("%d", &opcion);

        system("cls");

        switch(opcion)
        {

            case 1:
                printf(MAGENTA"\nIngrese valor para el primer operando: \n"RESET);
                scanf("%d", &num1);
                system("cls");
                break;
            

            case 2:
                printf(MAGENTA"\nIngrese valor para el segundo operando: \n"RESET);
                scanf("%d", &num2);
                system("cls");
                break;
            

            case 3:
                sumar(num1, num2);
                system("pause");
                break;
            

            case 4:
                restar(num1, num2);
                system("pause");
                break;
            

            case 5:
                dividir(num1, num2, &resultadoFloat);   
                system("pause");
                break;
                
            
            case 6:
                multiplicar(num1, num2);
                system("pause");
                break;
            

            case 7:
                factorialDeX(num1, &resultadoInt);
                system("pause");
                break;
            

            case 8:
                todasCuentas(num1, num2, &resultadoInt);
                dividir(num1, num2, &resultadoFloat);
                system("pause");
                break;
                

            case 9:
                printf(BLUE"PROGRAMA FINALIZADO"RESET);
                seguir = 'n';
                break;


            default:
                printf(RED"HA INGRESADO UN DATO INCORRECTO\n"RESET);
                system("pause");
                break;
        }
    }
    return 0;
}