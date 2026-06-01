#include <iostream>
using namespace std;

class student
{
private:
    string name;
    int age;

public:
    // setter for name
    void setName(string n)
    {
        name = n;
    }
    // setter for age with validation
    void setAge(int a)
    {
        if (a > 0 && a < 150)
        {
            age = a;
        }

        else
        {
            cout << "Invalid AGE" << endl;
        }
        // getter for name
        string getName()
        {
            return name;
        }
        // getter for age
        int getAge()
        {
            return age;
        }
    };
    int main()
    {
        student s1; // creating object
        // setting values using setter
        s1.setName("Vinith");
        s1.setAge("21");
        // getting values using getter
        cout << "student Name:"
             << s1.getName() << endl;
        cout << "student Age:"
             << s1.getAge() << endl;
    }
}