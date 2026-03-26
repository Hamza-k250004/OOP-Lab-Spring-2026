#include "iostream"
using namespace std;

class Person {
    string name;
    int age;

    public:
        Person(string n, int a) : name(n), age(a) {}

        void displayPerson() {
            cout << "Name: " << name << endl;
            cout << "Age: " << age << endl;
        }
};

class Student : public Person {
    int studentID;
    string program;

    public:
        Student(string n, int a, int id, string p) : Person(n, a), studentID(id), program(p) {}

        void displayStudent() {
            displayPerson();
            cout << "Student ID: " << studentID << endl;
            cout << "Program: " << program << endl;
        }
};

class GraduateStudent : public Student {
    string researchTopic, supervisorName;

    public:
        GraduateStudent(string n, int a, int id, string p, string topic, string supervisor) : Student(n, a, id, p), researchTopic(topic), supervisorName(supervisor) {}

        void displayGraduateStudent() {
            displayStudent();
            cout << "Research Topic: " << researchTopic << endl;
            cout << "Supervisor Name: " << supervisorName << endl;
        }
};

int main() {
    GraduateStudent g("Hamza", 17, 4, "AI", "Neural Networks", "Qasim");

    g.displayGraduateStudent();

    return 0;
}