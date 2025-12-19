#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n;
    bool found = false;

    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << "Enter a number to search: ";
    cin >> n;

    for (int i = 0; i < 10; i++) {
        if (arr[i] == n) {
            found = true;
            break;
        }
    }
    
    if (found) {
        cout << "Number found" << endl;
    } else {
        cout << "Number not found" << endl;
    }

    return 0;
}
