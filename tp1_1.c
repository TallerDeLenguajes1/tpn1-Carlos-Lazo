#include <stdio.h>

int main(){
	
	int var=10, *p_var;

	p_var = &var;

	printf("Contenido del puntero: %d \n",*p_var );

	printf("Direccion de memoria almacenada en el puntero: %p\n",p_var );

	printf("Direccion de memoria de la variable: %p\n", &var );

	printf("Direccion de memoria del puntero: %p \n",&p_var);

	printf("Memoria utilizada por la variable: %i bytes\n", sizeof(var));	
	
	return 0;
}