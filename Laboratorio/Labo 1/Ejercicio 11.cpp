#include<iostream>
using namespace std;

int main(){
	
	int tam[4], n, mayor=1;
	
	cout<<"Ingrese los numeros a utilizar:"<<n<<endl;
	cin>>n;
	
	for(int i=1; i<n;i++){
		cout<<"Coloque el numero:"<<endl;
		cin>>tam[i];
		
		if(tam[i]>mayor){
			mayor=tam[i];
			//[i];
		}
		
	}
	cout<<"El mayor numero es:"<<mayor<<endl;
	
	
	
	return 0;
}
