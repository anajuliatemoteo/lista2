#include <iostream> 
using namespace std;
int main() 
{
 float a, b;
 
 cout << "Digite o primeiro valor: ";
 cin >> a;
 
 cout << "Digite o sgundo valor: "; 
 cin >> b;
 
 if (a != b) {
 	if (a > b) {
		 cout << "O maior valor eh: " << a << endl;
	 } else {
		 cout << "O maior alor eh: " << b << endl;
	 }
} else {
	cout << "Os valores são iguais. Digite valores distintos." << endl;   

}

return 0;

 }
 