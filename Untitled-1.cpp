#include <iostream>
#include <stdlib.h>
using namespace std;

class Forma{ 
	private: 
			string color;
			string nombre;
	public: 
		Forma(string,string);
		virtual void imprimir();	
};

class Rectangulo : public Forma{
	private:
		float menor;
		float mayor;
	public: 
		Rectangulo(string,string,float,float);
		void imprimir();
};

Forma::Forma(string _color,string _nombre){
	
	color = _color;
	nombre = _nombre;
}

void Forma::imprimir(){
	cout<<"Color: "<<color<<endl;
	cout<<"Nombre: "<<nombre<<endl;
}

Rectangulo::Rectangulo(string _color,string _nombre,float _menor, float _mayor) : Forma ( _color, _nombre){
	
	menor = _menor;
	mayor = _mayor;
	
}

void Rectangulo::imprimir(){
	Forma::imprimir();
	cout<<"Mayor: "<<mayor<<endl;
	cout<<"Menor: "<<menor<<endl;
}

int main (){
	Forma r1;
	
	string _color;
	
	cout<<"Ingrese el color: "<<endl;
	cin>>_color;
	
	
	
	/*
	vector[0] = new Rectangulo("Rojo","Cuadrado",20.1,50.1);
	vector[0]->imprimir();
*/
	
}