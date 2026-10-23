
#include <iostream>
#include <vector>
using namespace std;

// Vector ko print karne ke liye
void print(vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout << endl;
}

// Bubble Sort algorithm
void bubbleSort(vector<int>& v) {
    int n = v.size();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {

            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int main() {
    int n;

    // User se input lena
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> v(n);

    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    cout << "Before sorting: ";
    print(v);

    bubbleSort(v);

    cout << "After sorting: ";
    print(v);

    return 0;
}
