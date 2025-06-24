#include <iostream>
using namespace std;

int main() {
    int mat[4][4];
    int main = 0, sec = 0;

    cout << "Matrix: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> mat[i][j];
        }
    }
    cout << "Main: "; 
    for (int i = 0; i < 4; i++) {
            cout << mat[i][i] << " ";
    }
    cout << endl;

    cout << "Secondary: ";
    for (int i = 0; i < 4; i++) {
        cout << mat[i][3 - i] << " ";
    }
    cout << endl;
    return 0;

}