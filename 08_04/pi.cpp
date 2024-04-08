#include <iomanip>
#include <iostream>

int main() {
    int num_iteracoes = 1;
    double pi = 0.0;

    // A aproximação de π é feita usando a Série de Leibniz para π:

    // π = 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ...)

    // Definição de número ímpar: 2i + 1
    // 2*0 + 1 = 1
    // 2*1 + 1 = 3
    // 2*2 + 1 = 5
    // 2*3 + 1 = 7

    while (true) {
        pi = 0.0;  // Zera o valor de pi para cada iteração

        for (int i = 0; i < num_iteracoes; ++i) {
            if (i % 2 == 0) {             // Se i é par
                pi += 1.0 / (2 * i + 1);  // Adiciona o termo 1/(2i+1)
            } else {                      // Se i é ímpar
                pi -= 1.0 / (2 * i + 1);  // Subtrai o termo 1/(2i+1)
            }
        }

        pi *= 4;  // Multiplica por 4 para obter a aproximação de π

        std::cout << std::fixed << std::setprecision(10);  // Define a precisão de casas decimais
        std::cout << "Aproximacao de pi com " << num_iteracoes << " termos: " << pi << std::endl;

        // Incrementa o número de iterações para obter uma melhor aproximação
        num_iteracoes++;
    }

    return 0;
}