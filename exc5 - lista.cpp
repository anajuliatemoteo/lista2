#include <iostream>
using namespace std;
int main()
{
	float base, altura, area;
	
	cout << "Informe o valor da base: ";
	cin >> base; 
	
	cout << "Informe o valor da altura: ";
	cin >> altura; 
	
	area = base * altura;
	
	cout << "A area do retangulo eh: " << area << endl;
	
	if ( area > 100  )
	{ 
     cout << "Terreno grande ";
    }
    
    else  
	{
		cout << "Terreno pequeno ";
	}

  return 0;
}