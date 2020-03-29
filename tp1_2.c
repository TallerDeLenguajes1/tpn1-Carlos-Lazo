#include <stdio.h>
#define tama 2 


int cuadrado(int n);
void cuadrado2(int n);
void variable(int n);
int invertir(int a, int b);
void menor(int vec[tama]);


int main() {
	
	int n=0,a,b,c,vec[tama];

	puts("Ingrese el numero:\n");
	fflush(stdin);
	scanf("%i",&n)	;
	
	c=cuadrado(n);
	
	printf("El Cuadrado por funcion de tipo int: %i \n",c);

	cuadrado2(n);
	
	variable(n);

	puts("\nIngrese los parametros a invertir:\n");
	fflush(stdin);
	scanf("%i \n %i",&a,&b);

	c=invertir(a,b);
	
	puts("Cantidad de pares a comparar");
	fflush(stdin);
	scanf("%i\n",&c);
	fflush(stdin);

	for (int i = 0; i < c; i++){
		
		menor(vec);
	}

	return 0;
}

int cuadrado(int n){
	int x=0;
 
 	x = n * n;

	return x;
}

void cuadrado2(int n){
	int x=0;
 
 	x = n * n;

 	printf("El cuadrado de %i es: %i \n",n,x);

}

void variable(int n){

	printf("Direccion de la variable : %p\n",&n);
	printf("Contenido de la variable : %i \n",n);

}

int invertir(int a, int b){

	int aux=0;
	
	printf("ANTES.Valor de a : %i. Valor de b: %i\n",a,b );
	
	aux=a; /*Guardo el valor de a en una variable auxiliar*/
	a=b;   /*Intercambio a con b*/
	b=aux; /*Guardo en b lo que tenia a*/

	printf("DESPUES.Valor de a : %i. Valor de b: %i\n",a,b );
}

void menor(int vec[tama]){
	puts("Ingrese los valores a verificar:");
	fflush(stdin);
	
	for (int i = 0; i < tama; i++){
		scanf("%i\n",&vec[i]);
		fflush(stdin);		
	}

	if(vec[0]!=vec[1]){
		if (vec[0]<vec[1]){
			
			printf("Menor a mayor: %i , %i\n", vec[0],vec[1]);
		}else{
			printf("Menor a mayor: %i , %i\n", vec[1],vec[0]);
		}
	}else{
			printf("Los valores son iguales\n");
	}
	
}