#include <iostream>
using namespace std;

class Payment {
public:
    virtual void processPayment(double amount) = 0;
    virtual void generateReceipt(double amount) = 0;

    virtual ~Payment() {}
};

class CreditCard : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Processing credit card payment of $" << amount << endl;
        cout << "Validating card details..." << endl;
        cout << "Payment approved.\n";
    }

    void generateReceipt(double amount) override {
        cout << "Receipt: Credit Card payment of $" << amount << " successful.\n\n";
    }
};

class Cash : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Processing cash payment of $" << amount << endl;
        cout << "Cash received.\n";
    }

    void generateReceipt(double amount) override {
        cout << "Receipt: Cash payment of $" << amount << " completed.\n\n";
    }
};

class DigitalWallet : public Payment {
public:
    void processPayment(double amount) override {
        cout << "Processing digital wallet payment of $" << amount << endl;
        cout << "Connecting to online payment system..." << endl;
        cout << "Transaction successful.\n";
    }

    void generateReceipt(double amount) override {
        cout << "Receipt: Digital wallet payment of $" << amount << " successful.\n\n";
    }
};

int main() {
    Payment* p;

    p = new CreditCard();
    p->processPayment(1000);
    p->generateReceipt(1000);
    delete p;

    p = new Cash();
    p->processPayment(500);
    p->generateReceipt(500);
    delete p;

    p = new DigitalWallet();
    p->processPayment(750);
    p->generateReceipt(750);
    delete p;

    return 0;
}