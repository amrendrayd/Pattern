#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    for(int row = 0; row < m; row++){
        for (int col = 0; col < n; col ++){
            cout << "* ";
        }
        cout << endl;
    }
}