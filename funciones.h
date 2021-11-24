#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/*
* Funcion que imprime en pantalla un menu de opciones 
* que va desde la opcion 1 hasta la 9
*/
void menuOpciones(int op1, int op2);



/*
* Funcion que suma dos numeros pasados como
* argumentos y los imprime en pantalla
* no retorna valores
*/
void sumar(int op1, int op2);



/*
* Funcion que resta dos numeros dos numeros pasados como
* argumentos y los imprime en pantalla
* no retorna valores
*/
void restar(int op1, int op2);



/*
* Funcion que divide dos numeros y los imprime en pantalla
* no retorna valores. Se le pasa como tercer parametro la
* direccion de memoria de una variable (&variable),
* verifica si se divide por cero
*/
void dividir(int op1, int op2, float* direccionDeVariableDeRetorno);



/*
* Funcion que multiplica dos numeros pasados como
* argumentos y los imprime en pantalla
* no retorna valores
*/
void multiplicar(int op1, int op2);



/* Funcion para sacar factorial de X.
* Devuelve error si el numero pasado
* es mayor a 11 o negativo
*/
void factorialDeX(int op1, int* direccionDeVariableDeRetorno);



/*funcion con todas las operaciones
* excepto la funcion dividir()
*/
void todasCuentas(int op1, int op2, int* direccionDeVariableDeRetorno);

#endif // FUNCIONES_H_INCLUDED