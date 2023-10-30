#include <iostream>
using namespace std;

int main(){
	// liczby całkowite - short, int, long, long long, unsigned short
	short a, b;
	cout << "Podaj a: ";
	cin >> a;
	cout << "Podaj b: ";
	cin >> b;
	
	// Instrukcja warunkowa - if(warunek)
	if (a > b){
		cout << a << " > " << b; // cout << zmienna << "tekst" << zmienna;
		} 
		// = operator przypisania
		// == operator porowania
		else if ( a == b){ // sprawdzamy kolejny, warunek, jeżeli powyżej sie nie spełni
		   cout << a << " == " << b;
		}
		else {// w przeciwnym przypadku, jeżeli warunek sie nie spełni
	       cout << a << " < " << b;
}
 }


