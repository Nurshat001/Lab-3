#include <iostream>
using namespace std;

int main() {
    int matrix[3][3], transpose[3][3];

    cout << "Matrix: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> matrix[i][j];
        }
    }

    // Transpose logic
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // Output transposed matrix
    cout << "Transpose: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << transpose[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
