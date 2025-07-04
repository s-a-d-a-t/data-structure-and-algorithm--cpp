#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int Key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == Key)  // Corrected variable name
            return i;  // Return index if found
    }
    return -1;  // Return -1 if not found
}

int main() {
    int size;
    cout<<"Enter the size of array:"<<endl;
    cin>>size;

    int arr[size];
    cout<<"enter your array element:"<<endl;
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    
    cout<<"enter the target number:"<<endl;
    int target;
    cin>>target;


    int result = linearSearch(arr, size, target); // Fixed 'keyt' to 'target'
   
    if (result!= -1)
        cout<<"Elemet found at index:"<<result<<endl;

    else 
        cout<<"elemet not found"<<endl;

    return 0;
}
