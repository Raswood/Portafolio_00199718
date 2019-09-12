#include<iostream>
#include<cmath>
using namespace std;

void pi(int a, int b){
	
	if(b>0){
		
		if(a%2 != 0) cout<<a*2-1;
		else cout<<a*2-1;
	}
	
	pi(a+1, b-1);
}

int main(){
	
	int n;
	
	cout<<"ingrese el dato:"<<endl;
	cin>>n;
	
	pi(1,n);
	
	return 0;
} 


/*double pi(double);

int main(){
	
	cout<<"Ingrese el valor:"<<endl;
	cout<<pi(n)<<endl;
	
	return 0;
}

double pi(double n){
	if(n==1){
		return 4*1;
	}else{
		return (4*(pow(-1,n+1)*(1/(2*n-1))) + pi(n-1));
	}
} */


