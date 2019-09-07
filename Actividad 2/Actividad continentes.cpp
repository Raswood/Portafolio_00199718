
#include<iostream>
#include<string>
using namespace std;

struct Datos_america{
	
	string nombre;
	string capital;
	int habitantes;
	
};
	
struct Datos_europa{
	
	string nombre;
	string capital;
	int habitantes;
	
};

struct Datos_africa{
	
	string nombre;
	string capital;
	int habitantes;
	
};	

struct Datos_Asia{
	
	string nombre;
	string capital;
	int habitantes;
	
};	

struct Datos_oceania{
	
	string nombre;
	string capital;
	int habitantes;
	
};	


int main(){
   
   
   
   string America[] = {"Brasil, Chile, Ecuador, Argentina, Paragua"}; //cada nombre debe estar encerrado en camillas, no todo encerrado en camillas
    string Europa[] = {"Alemania, Austria, Belgica, Bulgaria, Croacia"};
	string Africa[] = {"Argelia, Benin, Fasso, Camerun, Egipto"};
	string Asia[] = {"Afganistan, Arabia, Barein, China, Japon"}; 
	string oceania[] = {"Australia, Fiyi, Kiribati, Nauru, Nueva zelanda"};
   //struct continentes_paises;
   	
	cout<< *America<<endl;
	cout<<*Europa<<endl;
	cout<<*Africa<<endl;
	cout<<*Asia<<endl;
	cout<<*oceania<<endl;
	
	return 0;
}

