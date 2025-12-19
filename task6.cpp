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
    int largest = arr[0];
    int secondLargest = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    cout << "Largest number = " << largest << endl;
    cout << "Second largest number = " << secondLargest << endl;
    return 0;
}
