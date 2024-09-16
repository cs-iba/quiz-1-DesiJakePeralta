#include <iostream>
#include <bits/stdc++.h>
using namespace std;

template <typename T>
void stableSelectionSort(vector<T>& a) {
    for (int i = 0; i < a.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < a.size(); j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }

            T minElement = a[minIndex];
            for (int k = minElement; k > i; k--) {
                a[k] = a[k - 1];
            }
            a[i] = minElement;
        
   }
}

template <typename T>
void selectionSort(vector<T>& a) {
     int n = a.size();
        for (int i = 0; i < n; i++) {
            int min = i;
            for (int j = i+1; j < n; j++) {
                if (a[j] < a[min]) min = j;
            }
            swap(a[i], a[min]);
        }
}
int main() {
    // Example usage with an array of pairs
    vector<pair<int, int>> arr = {{3, 1}, {2, 2}, {1, 3}, {2, 1}};

    // Print original array
    cout << "Original array:" << endl;
    for (const auto& p : arr) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    // Sort by the second element of the pairs
    stableSelectionSort(arr);

    // Print sorted array
    cout << "Sorted array by the first element:" << endl;
    for (const auto& p : arr) {
        cout << "(" << p.first << ", " << p.second << ") ";
    }
    cout << endl;

    return 0;
}
