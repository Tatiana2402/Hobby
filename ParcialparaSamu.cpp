#include <stdio.h>
#define MAX 10

void DiasTrabajo(int dias[], int n, char nombres[]){
	int i;
	printf("Ingrese los dias trabajados por cada trabajador");
	printf("\n");
	for(i=0;i<n;i++){
		printf("trabajador %c : ",nombres[i]);
		scanf("%d",&dias[i]);
	}
}
void SueldoNeto(int n, int dias[], int salariodia, char nombres[], int salario[]){
	int i;
	for(i=0;i<n;i++){
		salario[i]=dias[i]*salariodia;
	}
}

void LecNombres(char nombres[], int n){
	int i;
	char nom;
	printf("ingrese los nombres de los empleados:");
	for(i=0;i<=n;i++){
		gets(&nombres[i]);
	}
}

void Seguridad(int salario[], int n, int salariodes[]){
	int i, aux, aux2;
	for(i=0;i<n;i++){
		aux=int(salario[i]*(12/100));
		salariodes[i]=int(aux-(aux/3));
	}
}

void Imprimir(int arreglo[], int n){
	for (int i=0;i<n;i++) {
		printf("%d",arreglo[i]);
		printf("\n");
	}
}

void MayorYMenor(int salario[], int n, char nombres[]){
	int mayor, menor, posma, posme,i;
	mayor=salario[0];
	posma=0;
	menor=salario[0];
	posme=0;
	for(i=1;i<n;i++){
		if(salario[i]>mayor){
			mayor=salario[i];
			posma=i;
		}
	}
	for(i=1;i<n;i++){
		if(salario[i]<menor){
			menor=salario[i];
			posme=i;
		}
	}
	printf("\n");
	printf("El empleado con el mayor salario es: %c",nombres[posma]);
	printf("\n");
	printf("El empleado con el menor salario es: %c",nombres[posme]);
	printf("\n");
	
}

void Alto(int salario[], int n, char nombres[]){
	for (int i=0;i<n;i++) {
		if(salario[i]>1000000){
			printf("%c",nombres[i]);
		}
	}
}

void Pagar(int salario[], int n){
	int total=0;
	for (int i=0;i<n;i++){
		total=total+salario[i];
	}
	printf("El total a pagar sera: %d ",total);
}

int main(void){
	int salariodia, n, dias[MAX], i, salariodes[MAX], salario[MAX];
	char nombres[MAX];
	salariodia=30000;
	n=5;
	LecNombres(nombres,n);
	DiasTrabajo(dias,n,nombres);
	SueldoNeto(n,dias,salariodia,nombres,salario);
	printf("El salario neto sin descuentos de cada empleado es: ");
	printf("\n");
	Imprimir(salario,n);
	MayorYMenor(salario,n,nombres);
	Seguridad(salario,n,salariodes);
	printf("Salario con descuento de seguridad");
	printf("\n");
	Imprimir(salariodes,n);
	printf("Empleados con sueldo superior a $1000.000");
	printf("\n");
	Alto(salario,n,nombres);
	Pagar(salario,n);
}
