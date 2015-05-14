/* Tp5 - Perímetro de rectángulo
 * Alejo Zito
 * 14/5/15
 */

#include <iostream>
using namespace std;

double b,h;

double GetNumPositivo();
double GetPerimetro(double, double);

int main() {
    cout << "Ingrese un número de base: ";
    b = GetNumPositivo();
    cout << "Ingrese un número de altura: ";
    h = GetNumPositivo();
    cout << "El perímetro del rectángulo es: ";
    cout << GetPerimetro(b, h);
    return 0;
}

double GetNumPositivo(){
    int num;
    cin >> num;
    while (num <= 0) {
        cout << "Por favor ingrese un número positivo: ";
        cin >> num;
    }
    return num;
};
double GetPerimetro(double base, double altura){
    double resultado;
    resultado = 2*(base+altura);
    return resultado;
};
