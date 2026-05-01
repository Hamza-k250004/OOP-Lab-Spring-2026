#include "iostream"
using namespace std;

class Person {
    string name;

    public:
        string getName() {
            cout << "Enter name: ";
            cin >> name;
        }

        void putName() {
            cout << "Name: " << name << endl;
        }

        virtual void getData() = 0;
        virtual bool isOutstanding() = 0;
};

class Student : public Person {
    float gpa;

    public:
        void getData() {
            cout << "Name: " << Person::getName() << endl;;
            cout << "GPA: " << gpa << endl;
        }

        bool isOutstanding() {
            if (gpa > 3.5)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

class Professor : public Person {
    int numOfPublications;

    public:
        void getData() {
            cout << "Enter the number of publications: ";
            cin >> numOfPublications;
        }

        bool isOutstanding() {
            if (numOfPublications > 100)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
};

int main() {
    bool flag = true;
    char check;
    while (flag)
    {
        char choice;
        cout << "Do you want to enter data for student or professor?" << endl;
        cout << "S: Student" << endl << "P: Professor" << endl;
        cin >> choice;
        
        if (choice == 'S')
        {
            Student s;
            s.getData();

            if (s.isOutstanding())
            {
                cout << "This is an outstanding student!" << endl;
            }
        }
        
        if (choice == 'P')
        {
            Professor p;
            p.getData();

            if (p.isOutstanding())
            {
                cout << "This is an outstanding professor!" << endl;
            }
        }
        
        cout << "Do you want to continue?" << endl;
        cout << "Y: Yes" << endl << "N: No" << endl;
        cin >> check;

        if (check == 'N')
        {
            flag = false;
        }
    }
}