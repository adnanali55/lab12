#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[n];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] = 0;
        }
    }
    cout << "Updated array:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
