
#include<iostream>
using namespace std;
int producto(int a, int b);

int main(){
	
	int N1;
	int N2;
	int p;
	
	cout<<"Ingrese el valor de a:"<<endl;
	cin>>N1;
	cout<<"Ingrese el valor de b:"<<endl;
	cin>>N2;
	p=producto(N1,N2);
	cout<<"El producto es:"<<" "<<p<<endl<<endl;
	
	return 0;
}

int producto(int a, int b){
	
	int x;
	
	if(b==1){
		cout<<"Caso base es:"<<" "<<a<<endl;
		return a;
	}else{
	  x= producto(a,b-1);
			
	}
		
	return a+x;
}

