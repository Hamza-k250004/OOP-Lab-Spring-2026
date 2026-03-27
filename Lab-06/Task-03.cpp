#include "iostream"
using namespace std;

class Employee {
    protected:
        string name;
        int id;

    public:
        Employee(string n, int i) : name(n), id(i) {}

        virtual double calcSalary() {
            return 0;
        }

        virtual void displayInfo() {
            cout << "Name: " << name << endl;
            cout << "ID: " << id << endl;
        }
};

class Manager : public Employee {
    double baseSalary, bonus;

    public:
        Manager(string n, int i, double base, double b) : Employee(n, i), baseSalary(base), bonus(b) {}

        double calcSalary() {
            return baseSalary + bonus;
        }

        void displayInfo() {
            Employee::displayInfo();
            cout << "Role: Manager" << endl;
            cout << "Salary: PKR " << calcSalary() << endl;
        }
};

class Developer : public Employee {
    double hourlyRate;
    int hoursWorked;

    public:
        Developer(string n, int i, double hrate, int hwork) : Employee(n, i), hourlyRate(hrate), hoursWorked(hwork) {}

        double calcSalary() {
            return hourlyRate * hoursWorked;
        }

        void displayInfo() {
            Employee::displayInfo();
            cout << "Role: Developer" << endl;
            cout << "Salary: PKR " << calcSalary() << endl;
        }
};

int main() {
    Manager m("Hamza", 1001, 150000, 50000);
    Developer d("Ali", 1002, 100000, 25000);

    Employee* emp1 = &m;
    Employee* emp2 = &d;

    emp1->displayInfo();
    emp2->displayInfo();

    return 0;
}