
#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Kitne numbers sort karne hain? ";
    cin >> n;

    int arr[100];

    cout << "Numbers enter karo: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Bubble Sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {

            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }

        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
