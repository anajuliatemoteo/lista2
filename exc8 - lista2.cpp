#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float A, B, C;

   
    cout << "Digite o valor de A: ";
    cin >> A;
    cout << "Digite o valor de B: ";
    cin >> B;
    cout << "Digite o valor de C: ";
    cin >> C;


    float hipotenusa, cateto1, cateto2;

    if (A >= B && A >= C) {
        hipotenusa = A;
        cateto1 = B;
        cateto2 = C;
    } else if (B >= A && B >= C) {
        hipotenusa = B;
        cateto1 = A;
        cateto2 = C;
    } else {
        hipotenusa = C;
        cateto1 = A;
        cateto2 = B;
    }

    if (fabs(pow(hipotenusa, 2) - (pow(cateto1, 2) + pow(cateto2, 2))) < 0.0001) {
        cout << "Os valores formam um triangulo retangulo." << endl;
    } else {
        cout << "Os valores NAO formam um triangulo retangulo." << endl;
    }

    return 0;
}
