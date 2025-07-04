#include <iostream>
using namespace std;

int binarySearch(int list[], int bottom, int top, int key) {
   while (bottom <= top) {
      int mid = bottom + top  / 2;
      // Check if key is present at mid
      if (list[mid] == key)
         return mid;
      // If key is greater, ignore left half
      if (list[mid] < key)
         bottom = mid + 1;
      // If key is smaller, ignore right half
      else
         top = mid - 1;
   }
   // If we reach here, then element was not present
   return -1;
}


int main() {
    cout<<"enter the size of an array:"<<endl;
    int size;
    cin>>size;

    cout<<"enter the elemets of an array:"<<endl;
   int list[size];
   for (int i=0;i<size;i++){
       cin>>list[i];
   }

   int key;
   cout << "Enter the element to search: ";
   cin >> key;
   // Function call
   int result = binarySearch(list, 0, size - 1, key);
   if (result == -1)
      cout << "Element is not present in list";
   else
      cout << "Element is present at index " << result;

   return 0;
}