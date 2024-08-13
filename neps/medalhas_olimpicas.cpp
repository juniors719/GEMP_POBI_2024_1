#include <bits/stdc++.h>
using namespace std;

class Pais {
   public:
    int ouro, prata, bronze;

    Pais() = default;

    bool operator<(const Pais& other) const {
        if (ouro != other.ouro) return ouro > other.ouro;
        if (prata != other.prata) return prata > other.prata;
        return bronze > other.bronze;
    }
};

int main() {
    Pais A, B;

    cin >> A.ouro >> A.prata >> A.bronze;
    cin >> B.ouro >> B.prata >> B.bronze;

    if (A < B)
        cout << "A" << endl;
    else
        cout << "B" << endl;
}