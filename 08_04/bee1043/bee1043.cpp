#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    cin >> a >> b >> c;
    if (a < b + c && b < a + c && c < a + b) {  // pode ser triângulo
        float perimetro = a + b + c;
        cout << fixed << setprecision(1) << "Perimetro = " << perimetro << endl;
    } else {  // não pode ser triângulo
        float area = (((a + b) * c) / 2);
        cout << fixed << setprecision(1) << "Area = " << area << endl;
    }
}