#include <iostream>
using namespace std;

int main() {
    int A[4][4];

    cout << "Matrix: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> A[i][j];
        }
    }

    int maxsum = 0;
    int maxrow = 0;

    for (int i = 0; i < 4; i++) {
        int rowsum = 0;
        for (int j = 0; j < 4; j++) {
            rowsum += A[i][j];
        }
        if (i == 0 || rowsum > maxsum) {
            maxsum = rowsum;
            maxrow = i; 
        } 
    }
    cout << "Row" << maxrow + 1 << " has the maximum sum: " << maxsum << endl;
    return 0;
}