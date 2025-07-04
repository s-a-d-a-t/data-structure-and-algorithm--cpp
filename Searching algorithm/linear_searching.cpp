#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int Key) {
    for (int i = 0; i <= size; i++) {
        if (arr[i] == Key)  // Corrected variable name
            return i;  // Return index if found
    }
    return -1;  // Return -1 if not found
}

int main() {
    int arr[] = {10, 25, 30, 45, 50};
    int target = 30;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, size, target); // Fixed 'keyt' to 'target'
    if (result!= -1)
        cout<<"Elemet found at index:"<<result<<endl;

    else 
        cout<<"elemet not found"<<endl;
    return 0;
}
