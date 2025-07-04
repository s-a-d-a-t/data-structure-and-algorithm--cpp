#include <iostream>
using namespace std;

void selection_sort(int arr[], int n) {
    int i, j, smallest, temp;
    
    for (i = 0; i < n; i++) {
        smallest = i;
        
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[smallest]) {
                smallest = j;
            }
        }                                                   
        
        // Swap the found smallest element with the first element
        temp = arr[smallest];
        arr[smallest] = arr[i];
        arr[i] = temp;
    }
}

int main() {    
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate array size

    cout << "Original array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    selection_sort(arr, n); // Call selection sort

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
