#include <iostream>
#include <string.h>
#include <vector>
using namespace std;
// Ariel Fernando Reyes Castellanos (11921023)
vector<char> letras_unicas(string palabra) 
{
	vector<char> letras;
	int help;
	help = 0;
	char arre[palabra.size()];
	for (int i = 0; i < palabra.size(); i++)
	{

		arre[i] = palabra[i];
		letras.push_back(arre[i]); // se le pasa el indice de valores a nuestro vector 
	}

	for (int i = letras.size() - 1; i + 1 > 0; i--)
	{
		help = 0; // con una variable de ayuda iremos incrementando y lo usaremos para ver si hay repetidas 
		for (int j = letras.size() - 1; j + 1 > 0; j--)
		{
			if (letras.at(j) == palabra[i]) // hacemos la comparacion 
			{
				help++; // aummenta nuestro auxiliar
			}
		}
		if (help > 1)
		{
			letras.erase(letras.begin() + i); // borrarmos ese letra de nuestro vector 
		}
	}

	return letras;
}

int *cuenta_cara(string palabra, vector<char> vec)
{
	int tam;
	int help;

	tam = vec.size();
	int *pala;
	pala = new int[vec.size()];
	for (int i = tam - 1; i + 1 > 0; i--) // hacemos un for para que recorra el tamaño del vector  
	{
		help = 0; // auxiliar para cambio 
		for (int j = palabra.length() - 1; j + 1 > 0; j--)
		{
			if (palabra[j] != vec.at(i)) // validamos que si son diferentes no se haga nada 
			{
			}
			else
			{
				help++; // si lo son que cambien y a la posicion se le agrega el auxiliar 
				pala[i] = help;
			}
		}
	}

	return pala;
}

/*for(int i=0; i<letras.size(); i++){
	for(int j=0; j< letras.size()-1; j++){
		
		
		if(letras[i]==letras[j]){
			letras.erase(letras.begin() + i); 
 		} 
		
	} */

int main()
{
	int opc = 2;
	while (opc != 5) // creacion del menu 
	{

		cout << "------------Menu------------" << endl;
		cout << "1....................... Retorna letras unicas" << endl;
		cout << "2.........................Cuenta de cada caracter" << endl;
		cout << "3.........................De mayor a menor" << endl;
		cout << "4..........................Frecuencia de letras" << endl;
		cout << "5..........................Salir" << endl;
		cin >> opc;

		switch (opc)
		{

		case 1:
		{ // ejercicio de retorno de letras unicas 

			string palabra;
			cout << "Ingrese una palabra: " << endl;
			cin >> palabra;
			vector<char> letra;
			letra = letras_unicas(palabra);
			for (int i = 0; i < letra.size(); i++)
			{
				cout << "[" << letra[i] << "]" << endl;
			}

			break;
		}
		case 2:
		{
			string pala;
			cout << "Ingrese una palabra: " << '\n';
			cin >> pala;

			vector<char> redu;

			redu = letras_unicas(pala);
			int *p = cuenta_cara(pala, redu);
			for (int i = 0; i < redu.size(); i++)
			{
				cout << "[" << p[i] << "]";
			}

			break;
		}

		case 3:
		{

			break;
		}
		}
	}

	return 0;
}
