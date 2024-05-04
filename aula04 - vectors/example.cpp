#include <iostream>
#include <vector>
using namespace std;

void imprimeValores(vector<int>& vet) {
    for (int i : vet) {
        cout << i << " ";
    }
    cout << endl;
}

void imprimeSizeCapacity(vector<int>& vet) {
    cout << "Size = " << vet.size() << " | Capacity = " << vet.capacity() << endl;
}

void estatisticas(vector<int>& vet) {
    imprimeSizeCapacity(vet);
    imprimeValores(vet);
    cout << "-------------------------------\n";
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    estatisticas(v);

    v.push_back(6);

    estatisticas(v);

    v.push_back(7);
    v.push_back(8);
    v.push_back(9);
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);
    v.push_back(15);

    estatisticas(v);

    v.pop_back();

    estatisticas(v);

    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();

    estatisticas(v);

    v.shrink_to_fit();

    estatisticas(v);
}
