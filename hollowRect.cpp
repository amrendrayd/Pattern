#include <iostream>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;

    for(int row = 0; row < m; row++){
        for ( int col = 0; col < n; col++){
            if(row == 0 || row == m-1 || col == 0 || col == n-1){
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}