#include "iostream"
using namespace std;

class Account {
    protected:
        double balance;
    
    public:
        Account(double bal) : balance(bal) {}

        virtual double calculateInterest() {
            return 0;
        }

        void displayBalance() {
            cout << "Balance: PKR " << balance << endl;
            cout << "Interest: PKR " << calculateInterest() << endl;
            cout << "Total: PKR " << balance + calculateInterest() << endl;
        }
};

class SavingsAccount : public Account {
    int time;
    double rate;

    public:
        SavingsAccount(double bal, int t, double r) : Account(bal), time(t), rate(r) {}

        double calculateInterest() override {
            return balance * rate * time;
        }
};

class CurrentAccount : public Account {
    double rate, minBalance;
    int days;

    public:
        CurrentAccount(double bal, double r) : Account(bal), rate(r), days(30), minBalance(bal) {}

        void updateMinBalance(double currentBalance) {
            if (currentBalance < minBalance)
            {
                minBalance = currentBalance;
            }
            
        }

        double calculateInterest() override {
            return (minBalance * rate * days) / 365;
        }
};