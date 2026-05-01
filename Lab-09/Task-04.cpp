#include "iostream"
using namespace std;

class Employee {
    string name;
    public:
        Employee(string n) : name(n) {}

        string getName() {
            return name;
        }

        virtual float calculateSalary() = 0;
        virtual void displayDetails() = 0;
};

class FullTimeEmployee : public Employee {
    float fixedSalary;

    public:
        FullTimeEmployee(string n, float s) : Employee(n), fixedSalary(s) {}

        float calculateSalary() {
            return fixedSalary;
        }

        void displayDetails() {
            cout << "Name: " << Employee::getName() << endl;
            cout << "Salary: " << fixedSalary << endl;
        }
    };
    
class PartTimeEmployee : public Employee {
    float ratePerHour;
    int hours;
        
    public:
        PartTimeEmployee(string n, float r, int h) : Employee(n), ratePerHour(r), hours(h) {}
        
        float calculateSalary() {
        return (ratePerHour * hours);
    }
    
    void displayDetails() {
        cout << "Name: " << Employee::getName() << endl;
        cout << "Salary: " << ratePerHour * hours << endl;
    }
};
    
class ContractEmployee : public Employee {
    float ratePerProject;
    int num;

    public:
        ContractEmployee(string n, float r, int num) : Employee(n), ratePerProject(r), num(num) {}

        float calculateSalary() {
            return (ratePerProject * num);
        }

        void displayDetails() {
            cout << "Name: " << Employee::getName() << endl;
            cout << "Salary: " << ratePerProject * num << endl;
        }
};