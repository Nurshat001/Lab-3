#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Number of elements: ";
    cin >> n;

    int arr[n];

    cout << "Numbers: ";

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    return 0;
}