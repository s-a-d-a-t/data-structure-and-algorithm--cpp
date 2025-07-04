#include <iostream>
using namespace std;

int linearSearch(string str, char keyt) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == keyt)  // Fixed variable name
            return i;
    }
    return -1;
}

int main() {
    string str = "hello";
    char key = 'o';

    int result = linearSearch(str, key); // Ensure correct parameter name
    if (result!= -1)
        cout<<"Elemet found at index:"<<result<<endl;

    else 
        cout<<"elemet not found"<<endl;
    return 0;
}
