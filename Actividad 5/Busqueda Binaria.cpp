#include<iostream>
using namespace std;

bool busqueda(int arreglo[], int ba, int to, int c){
	int aux;
	aux = (ba+to)/2;
	
	if(arreglo[aux]!=c && (ba==to)){
		return false;
	
	}
	if(arreglo[aux]==c){
		return true;
	}
	if(arreglo[aux]<c){
		return busqueda(arreglo,aux+1,to,c);
	}
	if(arreglo[aux]>c){
		return busqueda(arreglo,ba,aux-1,c);
	}
		
}


int main(){
	
	int a, b;
	cout<<"Introduzca el tamaño del arreglo:"<<endl;
	cin>>a;
	int arreglo[a-1];
	
	cout<<"Ingrese elementos:"<<endl;
	for(int i=0; i<a; i++){
		cin>>arreglo[i];
	}	
	cout<<"Ingrese elemento que desea buscar:"<<endl;
	cin>>b;
	
	if(busqueda(arreglo,0,a-1,b)){
		cout<<"El dato pertenece al arreglo"<<endl;
	}
	else{
		cout<<"No existe"<<endl;	
	} 
		 
		 
			
		

	
	return 0;
	
}
