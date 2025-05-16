#include <iostream>
#include <cmath>
using namespace std;
int main ()
{ 
   float peso, altura, R ;
   
   cout << "Digite o peso em (kg): " ;
   cin >> peso;
   
   cout << "Digite a altura (em metros): ";
   cin >> altura;
   
   R = peso / pow(altura, 2);
   
   if ( R < 20 ) 
   {cout << "Abaixo do peso" << endl;
   
   	} else if (20 <= R < 25)
	   {
	   	cout << "Peso ideal" << endl;
	   	
	   } else if(R >= 25)
	   {
		   cout << "Acima do peso" << endl;
       }
       
       return 0;
}

