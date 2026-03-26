#include "iostream"
using namespace std;

class Person {
    protected:
        string name;
        int age;
    
    public:
        void setPerson(string n, int a) {
            this->name = n;
            this->age = a;
        }

        void displayPerson() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class StudentPublic : public Person {
    int rollNum;

    public:
        void setStudent(string n, int a, int r) {
            setPerson(n, a);
            rollNum = r;
        }

        void displayStudent() {
            displayPerson();
            cout << "Roll Number: " << rollNum << endl;
        }
};

class StudentProtected : protected Person {
    int rollNum;

    public:
        void setStudent(string n, int a, int r) {
            setPerson(n, a);
            rollNum = r;
        }

        void displayStudent() {
            displayPerson();
            cout << "Roll Number: " << rollNum << endl;
        }
};

class StudentPrivate : private Person {
    int rollNum;

    public:
        void setStudent(string n, int a, int r) {
            setPerson(n, a);
            rollNum = r;
        }

        void displayStudent() {
            displayPerson();
            cout << "Roll Number: " << rollNum << endl;
        }
};

int main() {
    cout << "-----Public Inheritance-----" << endl;
    StudentPublic s1;
    s1.setStudent("Hamza", 18, 1);
    s1.displayStudent();
    // s1.displayPerson(); --> NOT accessible
    // s1.name = "Ali"; --> NOT accessible

    cout << "-----Protected Inheritance-----" << endl;
    StudentProtected s2;
    s2.setStudent("Hamza", 18, 1);
    s2.displayStudent();
    // s2.displayPerson(); --> NOT accessible

    cout << "-----Private Inheritance-----" << endl;
    StudentPrivate s3;
    s3.setStudent("Hamza", 18, 1);
    s3.displayStudent();
    // s3.displayPerson(); --> NOT accessible

    return 0;
}