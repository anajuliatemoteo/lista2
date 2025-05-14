#include <iostream>
using namespace std;

int main() {
	float a, b;
	
	cout << "Digite o primeiro valor: " ;
	cin >> a;
	
	cout << "Digite o segundo valor: " ;
	cin >> b;
	
	if (a > b) 
	{
		cout << "O maior valor eh: " << a << endl;
	}
	else 
	{
	    if (b > a)
        { 
		   cout << "O maior valor eh: " << b << endl;
	    } 
		else
		{
		   cout << "Os valores são iguais. " << endl;
        }
	}
	return 0;

}
