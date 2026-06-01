#include <iostream>
using namespace std;
// --------------------------------------------------
// this POINTER
// Definition:
// 'this' points to current object.
// --------------------------------------------------
class Student {
private:
    int age;
public:
    // Constructor
    Student(int age) {
        // this->age -> member variable
        // age -> local parameter
        this->age = age;
    }
    // Display function
    void show() {
        cout << "Age: " << this->age << endl;
    }
};
int main() {
    // Creating object
    Student s1(21);
    // Calling function
    s1.show();
    return 0;
}