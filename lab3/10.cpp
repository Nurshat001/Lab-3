#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Number of elements: " << endl;
    cin >> n;

    int arr[n];

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "Sort: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
        cout << endl;
        return 0;
}