#include<iostream>
#include<string>
using namespace std;

struct Datos_continente{
	
	string nombre;
	string capital;
	float habitantes;
	
};

int main(){
	
	cout<<"Ingrese la opcion a ejecutar: "<<endl;
	cout<<"1 para ingresar paises"<<endl;
	cout<<"2 para ingresar capitales"<<endl;
	cout<<"3 para habitantes"<<endl;
	
	int opcion=0;
	int pais=0;
	int capital=0;
	int habitantes=0;
	cin>>opcion;
	
	switch(opcion){
		
		case 1: cout<<"Ingersar paises:"; break;{
			cin>>pais;
			
			break;
		}
		case 2: cout<<"Ingresar capital:";break;{
			cin>>capital;
			break;
		}
		case 3: cout<<"habitantes:";break;{
			cin>>habitantes;
			break;
		}
		default: cout<<"No es correcto lo ingresado:"<<endl;break;
	}
	
	
	struct Datos_continente America;
	
     America.nombre = "Brasil", "Chile", "Ecuador", "Argentina", "Paraguay";
     America.capital = "Brasalia", "Santo de chile", "Quito", "Buenos aires", "Asunción";
     America.habitantes = 209.3,18.05,16.62,44.27,6.811;
    
    struct Datos_continente Europa;

    Europa.nombre = "Alemania", "Austria", "Belgica", "Bulgaria", "Croacia";
    Europa.capital = "Berlín", "Viena", "Bruselas", "Sofía", "Zagreb";
    Europa.habitantes = 82.79, 8.773, 11.35, 7.102, 4.154;
    
    struct Datos_continente Africa;
	
    Africa.nombre = "Argelia", "Benin", "Faso", "Camerún", "Egipto";
    Africa.capital = "Argel", "Porto Novo", "Uagadugú", "Yaundé", "El Cairo";
    Africa.habitantes = 41.32, 11.18, 19.19, 24.05, 97.55;
    
    struct Datos_continente Asia;
	
    Asia.nombre = "Afganistan", "Arabia","Bahrein","china","japon";
    Asia.capital = "Kabul", "Riad", "Manama", "Pekín", "Tokio";
    Asia.habitantes = 35.53, 32.94, 1.493, 1.386, 126.8;
    
    struct Datos_continente Oceania;
	
    Oceania.nombre = "Australia","Fiyi", "Kiribati", "Nauru", "Nueva zelanda";
    Oceania.capital = "Canberra", "Suva", "Farowa", "Yaren", "Wellington";
    Oceania.habitantes = 24.6, 905.502, 116.398, 13.649, 4.794;
    
    
    
    
    
 /*t mayor_cantidad(float America.habitantes,float Europa.habitantes,float Africa.habitantes}, float Asia.habitantes,float Oceania.habitantes);
{
	int mayor_cantidad;
	if(America.habitantes>Europa.habitantes)
		if(America.habitantes>Africa.habitantes)
			Datos_continente=America.habitantes;
		else
			Datos_continente=Africa.habitantes;
	else
		if(Europa.habitantes>Africa.habitantes)
			Datos_continente=Europa.habitantes;
		else
			Datos_continente=Africa.habitantes;
return Datos_continente;
}         */
    
    
   cout<<"Paises:"<<endl<<endl;
	cout<<America.nombre<<endl; 
	cout<<Europa.nombre<<endl;
	cout<<Africa.nombre<<endl;
	cout<<Asia.nombre<<endl;
	cout<<Oceania.nombre<<endl<<endl;
	
	cout<<"Capitales:"<<endl<<endl;
	cout<<America.capital<<endl;
	cout<<Europa.capital<<endl;
	cout<<Africa.capital<<endl;
	cout<<Asia.capital<<endl;
	cout<<Oceania.capital<<endl<<endl;
	
	cout<<"Habitantes:"<<endl<<endl;
	cout<<America.habitantes<<endl;
	cout<<Europa.habitantes<<endl;
	cout<<Africa.habitantes<<endl;
	cout<<Asia.habitantes<<endl;
	cout<<Oceania.habitantes<<endl; 
	
//	system("pause");
	return 0;
}

