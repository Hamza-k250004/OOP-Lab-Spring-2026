#include "iostream"
#include <string>
using namespace std;

class Person {
    protected:
        string name;
        int age;

    public:
        Person(string n, int a) : name(n), age(a) {}

        void display() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Teacher : virtual public Person {
    public:
        Teacher(string n, int a) : Person(n, a) {
            cout << "Teacher Added!" << endl;
        }
};

class Student : virtual public Person {
    public:
        Student(string n, int a) : Person(n, a) {
            cout << "Student Added!" << endl;
        }
};

class TeachingAssistant : public Teacher, public Student {
    string course;

    public:
        TeachingAssistant(string n, int a, string c) : Person(n, a), Teacher(n, a), Student(n, a), course(c) {
            cout << "Teaching Assistant Added!" << endl;
        }

        void showDetails() {
            cout << "===Teaching Assistant Details===" << endl;
            display();
            cout << "Course: " << course << endl;
            cout << "================================" << endl;
        }
};

int main() {
    TeachingAssistant ta("Hamza", 17, "OOP Lab");
    ta.showDetails();

    return 0;
}