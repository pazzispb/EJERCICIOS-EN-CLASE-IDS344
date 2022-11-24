#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int x = 0, y = 0, z = 0; //x es senadores, y es congresistas, z es invitados
	int monedas = 0; //cantidad de monedas
	
	for(z = 0; z <= 100; z++){
		
		y = (123/8.0) +(35/24.0)*z; //calculo de los congresistas
		
		if(floor(y) - y == 0){ //si es entero el numero de congresistas
		
			x = 100 - y - z; //calculo de los senadores
			monedas = 75*x + 99*y + 40*z; //calculo de las monedas
		
			if(monedas == 7869 && x + y + z == 100){ // si las monedas 
				cout<< "Senadores: "<< x << " Congresistas: "<< y << " Invitados: "<< z << endl;
				cout<< "Monedas: " << monedas << endl << endl;	
			}
		
		}
		
		if(x <= 0 || y <= 0) break; //si llega a 0 sal del bucle 
	}
}
