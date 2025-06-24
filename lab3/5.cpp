#include <iostream>
using namespace std;

int main() {
    int n, target;

    cout << "Number of elements: ";
    cin >> n;

    int arr[n];
    
    cout << "Number " << n << " integers: ";
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Target ";
    cin >> target;
    
    bool found = false;

    for (int i = 0; i < n; i++) {
    
        if (arr[i] == target) {
            cout << "Found at index " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Not found" << endl;
    }

    return 0;

}