#include <iostream>
#include <string.h>
#include <vector>
using namespace std; 
// Ariel Fernando Reyes Castellanos (11921023)
	vector<char> letras_unicas(string palabra){
		vector<char> letras; 
			for(int i=0; i< palabra.size(); i++){
				//	letras.push_back(palabra[i]);
				for(int j=0;i<palabra.size()-1; i++){
					if(i!=j){
						letras.push_back(palabra[i]);
						
					} else {
						// aca es por si la letra se repite 
					}
					
					
					
				}
					
				}
				
			
				
				
				return letras; 
		
		
	} 
int main() {
	int opc =2;
	while(opc!=5){
		
		cout<<"------------Menu------------"<<endl;
		cout<<"1....................... Retorna letras unicas"<<endl; 
		cout<<"2.........................Cuenta de cada caracter"<<endl; 
		cout<<"3.........................De mayor a menor"<<endl;
		cout<<"4..........................Frecuencia de letras"<<endl; 
		cout<<"5..........................Salir"<<endl; 
		cin>>opc; 
		
		
		switch(opc){
		
			case 1:
				string palabra; 
				cout<<"Ingrese una palabra: "<<endl; 
				cin>> palabra; 
			vector<char> letra; 
			letra =	letras_unicas(palabra);
				for(int i =0; i<letra.size(); i++){
					cout<<"["<<letra[i]<<"]"<<endl; 
				}
				
			
				
				break; 
			
			
			
		}
		
		
		
		
		
	}
	 
	
	
	
	
	
	
	return 0;
}
