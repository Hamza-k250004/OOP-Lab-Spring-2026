#include "iostream"
using namespace std;

class Payment {
    public:
        void pay(double amount) {
            cout << "Amount: PKR" << amount << " paid using cash." << endl;
        }
        
        void pay(double amount, int cardNum) {
            cout << "Amount: PKR" << amount << " paid using card." << endl;
            cout << "Card Number: " << cardNum << endl;
        }

        void pay(double amount, int accountNum, string bankName) {
            cout << "Amount: PKR" << amount << " paid using online banking." << endl;
            cout << "Bank Name: " << bankName << endl;
            cout << "Account Number: " << accountNum << endl;
        }
};

int main() {
    Payment p;

    p.pay(10000);
    p.pay(20000, 121);
    p.pay(30000, 123, "HBL");

    return 0;
}