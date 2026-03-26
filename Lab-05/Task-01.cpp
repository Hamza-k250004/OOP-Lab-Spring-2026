#include "iostream"
using namespace std;

class Employee {
    int empID;
    string name;
    double salary;

    public:
        void setEmployeeData(int id, string n, double s) {
            this->empID = id;
            this->name = n;
            this->salary = s;
        }

        void displayEmployeeData() {
            cout << "ID: " << empID << endl;
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }
};

class Manager : public Employee {
    string department;
    double bonus;

    public:
        void setManagerData(int id, string n, double s, string d, double b) {
            setEmployeeData(id, n, s);
            this->department = d;
            this->bonus = b;
        }

        void displayManagerData() {
            displayEmployeeData();
            cout << "Department: " << department << endl;
            cout << "Bonus: " << bonus << endl;
        }
};

int main() {
    Manager m;
    m.setManagerData(101, "Hamza", 50000, "IT", 10000);

    cout << "-----Manager Details-----" << endl;
    m.displayManagerData();

    return 0;
}