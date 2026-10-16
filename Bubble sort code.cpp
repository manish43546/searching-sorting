
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

    // Outer loop: passes control karta hai
    for (int i = 0; i < n - 1; ++i) {

        // Inner loop: adjacent elements compare karta hai
        for (int j = 0; j < n - i - 1; ++j) {

            // Agar left element bada hai, toh swap karo
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> v = {5, 3, 0, -1, 33, 56, 4};

    cout << "Before sorting: ";
    print(v);

    bubbleSort(v);

    cout << "After sorting: ";
    print(v);

    return 0;
}

