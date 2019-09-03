//Ejercicio: calcular la mediana de un arreglo de numeros enteros.

#include<iostream>
using namespace std;

const int cantidad=10;

float media(int *);

int main(){
	
	int a[cantidad];
	int i;
	for(i=0;i<cantidad;i++)
	{
		
		cout<<"Introduce el elemento:"<<i+1<<endl;
		cin>>a[i];
	}
	
	cout<<"La media es:"<<media(a)<<endl;

	
	
}

float media(int *tamano){
	
	float media=0;
	int i;
	for(i=0; i<cantidad; i++){
		media=media + *tamano;
		tamano++;
	}
	return media/cantidad;
	
}
