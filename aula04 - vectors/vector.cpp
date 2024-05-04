#include <iostream>
#include <vector>

using namespace std;

void info(vector<int>& vet) {
    cout << "Size = " << vet.size() << " | Capacity = " << vet.capacity() << endl;
    for (int i : vet) {
        cout << i << " ";
    }
    cout << endl;
    cout << "-------------------------------\n";
}

int main() {
    vector<int> v;
    info(v);

    v.push_back(1);
    info(v);

    v.push_back(2);
    info(v);

    v.push_back(3);
    info(v);

    v.push_back(4);
    v.push_back(5);
    info(v);

    v.shrink_to_fit();
    info(v);

    v.push_back(6);
    info(v);

    v.pop_back();
    v.pop_back();
    info(v);
}