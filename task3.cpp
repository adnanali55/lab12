#include <iostream>
using namespace std;

int main() {
    int n;
    int arr[n];
    bool count;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) {
        count =0;


        if (!count) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }

            cout << arr[i] << " appears " << count << " time";
        }
    }

    return 0;
}
