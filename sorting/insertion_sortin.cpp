#include <iostream>
using namespace std;

void insertion_sorting(int arr[], int size) {
    int temp;
    for (int i = 1; i < size; i++) {  
        temp = arr[i];
       for(int j = i; j>0; j--) 
	                            {                     
                                 if (temp <arr[j-1]){
                                        arr[ j ]=arr[ j-1]; 
                                        arr[ j-1]=temp; 
                                 }
	   }
	}
}
	

int main() {
    int arr[] = {12, 14, 17, 11, 13, 16, 15};
    int size = sizeof(arr) / sizeof(arr[0]);

    insertion_sorting(arr, size);
    
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++)
	{
        cout << arr[i] << " ";
    }

    return 0;
}
