#include <iostream>
#include <cmath>
using namespace std;
int main(){
char letra;
int numero, n = 0, potencia = pow(26,n),suma;
  cout << "Introduce letras mayúsculas acabadas en punto";
  cin >> letra;
// Primero ponemos la base 26 e indicamos que el programa acabe cuando aparezca un '.'
	
	while (letra != '.') {
	
	numero = (int(letra) -65);
	
	suma =  (numero * potencia) + (numero * potencia);
	n++;

	cin >> letra;
}
	cout << suma;
	
	
return 0;
}
