#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[n];
     int sum = 0;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum =sum+ arr[i];
        }
    }
    cout << "Sum = " << sum << endl;

    return 0;
}
