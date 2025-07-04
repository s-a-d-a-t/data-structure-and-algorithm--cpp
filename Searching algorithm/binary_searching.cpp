#include <iostream>
using namespace std;

int binarySearch(int list[], int bottom, int top, int key) {
   while (bottom <= top) {
      int mid = bottom + top  / 2;
      // Check if key is present at mid
      if (list[mid] == key)
         return mid;
      // If key is greater, ignore left half
      else if (list[mid] < key)
         bottom = mid + 1;
      // If key is smaller, ignore right half
      else
         top = mid - 1;
   }
   // If we reach here, then element was not present
   return -1;
}


int main() {
   int list[] = {15,23,47,54,76};
   int n = sizeof(list) / sizeof(list[0]);
   int key;
   cout << "Enter the element to search: ";
   cin >> key;
   // Function call
   int result = binarySearch(list, 0, n - 1, key);
   if (result == -1)
      cout << "Element is not present in list";
   else
      cout << "Element is present at index " << result;

   return 0;
}