#include<iostream>
using namespace std;

int sumatoria(int n){
	 int sum=0;
	 
	if(n==1){
		sum = 1;
	}
	else{
		sum=n+sumatoria(n-1);
	}
	

	return sum;
}

int main(){
	
	int num;
	
	cout<<"Ingrese los elementos:"<<endl;
	cin>>num;
	
	cout<<"La sumatorio de los digitos es:"<<sumatoria(num);
	
	return 0;
}
