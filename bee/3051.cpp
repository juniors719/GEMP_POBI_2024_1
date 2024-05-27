#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

long int countRectangles(vector<int>& sequence, int K) {
    int N = sequence.size();
    unordered_map<int, int> prefixSumCount;
    int currentSum = 0;
    long int count = 0;

    for (int i = 0; i < N; ++i) {
        currentSum += sequence[i];

        // Se a soma atual é igual a K, incrementamos o contador
        if (currentSum == K)
            count++;

        // Se a diferença entre a soma atual e K já foi vista anteriormente, adicionamos ao contador
        if (prefixSumCount.find(currentSum - K) != prefixSumCount.end())
            count += prefixSumCount[currentSum - K];

        // Incrementamos o contador de soma de prefixo
        prefixSumCount[currentSum]++;
    }

    return count;
}

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> sequence(N);
    for (int i = 0; i < N; ++i)
        cin >> sequence[i];

    long int result = countRectangles(sequence, K);
    cout << result << endl;

    return 0;
}
