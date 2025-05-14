#include <iostream>
using namespace std;

int main() {
	float a, b, c;
	
	cout << "Digite o primeiro valor: ";
	cin >> a;
	
	cout << "Digite o segundo valor: ";
	cin >> b;
	
	cout << "Digite o terceiro valor: ";
	cin >> c;
	
	cout << "Maior(es) valor(es): ";
	
	if (a >= b && a >= c) cout << a << " ";
	if (b >= a && b >= c && b != a) cout << b << " ";
    if (c >= a && c >= b && c != a &&c != b) cout << c << " ";
	
	cout << endl;
return 0;	
	
}