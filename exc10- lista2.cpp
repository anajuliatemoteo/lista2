#include <iostream>
#include <string>
using namespace std;

int main () {
	char sexo;
	float peso, altura, R;
	
	cout << "Digite o sexo (M ou F): ";
	cin >> sexo;
	
	cout << "Digite o peso (kg): ";
	cin >> peso; 
	
	cout <<  "Digite a altura: ";
	cin >> altura;
	
	R = peso / (altura * altura);
	
	if (sexo == 'F' || sexo == 'f'){
		if(R < 19){
			cout << "Abaixo do peso" << endl;
			
		}
		else if(19<=R && R<=24){
			cout << "Peso ideal" << endl;
		}
		else if(R>=24){
			cout << "Acima do peso" << endl;
		}
	}
	else if (sexo == 'M' || sexo == 'm'){
		if(R < 20){
			cout << "Abaixo do peso" << endl;
			
		}
		else if(20<=R && R<=25){
			cout << "Peso ideal" << endl;
		}
		else if(R>=25){
			cout << "Acima do peso" << endl;
		}
	}
	return 0;

	
	
}
#include <iostream>
using namespace std;

int main() {
    float P1, P2, media;

    // Entrada das notas
    cout << "Digite a nota da P1: ";
    cin >> P1;

    cout << "Digite a nota da P2: ";
    cin >> P2;

    // Cálculo da média
    media = (P1 + 2 * P2) / 3;

    // Exibição da média
    cout << "Media: " << media << endl;

    // Verificação da situação
    if (media >= 5) {
        cout << "Situacao: Aprovado" << endl;
    } else {
        cout << "Situacao: Reprovado" << endl;
    }

    return 0;
}
