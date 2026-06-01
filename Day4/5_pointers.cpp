#include <iostream>
using namespace std;
// --------------------------------------------------
// POINTER DECLARATION AND OPERATIONS
// Definition:
// Pointer stores address of another variable.
// --------------------------------------------------
int main() {
    // Normal variable
    int x = 10;
    // Pointer variable
    // Stores address of x
    int* ptr = &x;
    // x -> value
    cout << "Value of x: " << x << endl;
    // &x -> address of x
    cout << "Address of x: " << &x << endl;
    // ptr -> stores address of x
    cout << "Pointer value: " << ptr << endl;
    // *ptr -> value stored at address
    cout << "Value using pointer: " << *ptr << endl;
    // Changing value using pointer
    *ptr = 50;
    cout << "Updated x value: " << x << endl;
    return 0;
}