#include <iostream>
using namespace std;

int main () {
	float A, B, C;
	
	cout << "Digite os tres lados do triangulo: ";
	cin >> A >> B >> C;
	
	if (A < B + C && B < A + C && C < A + B){
		if (A == B && B == C){
			cout << "Triangulo equilatero" << endl;
		} else if (A == B || B == C || A == C) {
			cout << "Triangulo isosceles" << endl;
		} else if (A != B && B != C && C != A) {
			cout << "Triangulo escaleno" << endl;
		} 
	}
	return 0;
	
	
	
	
	
	
	
	
	
}