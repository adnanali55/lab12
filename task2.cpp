#include <iostream>
using namespace std;

int main() {
    int arr[10];
    bool once;
    cout << "Enter 10 integers:" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    cout << "Element only once: ";
    for (int i = 0; i < 10; i++) {
        once = true;

        for (int j = 0; j < 10; j++) {
            if (i != j && arr[i] == arr[j]) {
                once = false;
                break;
            }
        }

        if (once) {
            cout << arr[i] << endl;
            break;
        }
    }

    return 0;
}
