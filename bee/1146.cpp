#include <iostream>
using namespace std;

int main(){
    int n;
    while(true){
        cin >> n;
        if(n == 0) break;
        for(int i = 1; i <= n; i++){
            cout << n;
            if(i < n) cout << " ";
        }
        cout << endl;
    }
    return 0;
}