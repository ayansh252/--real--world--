
#include <iostream>
using namespace std;

class Account {
private:
    int  balance;   

public:
    void setBalance(int b) {
            balance = b;
    }

    int  getBalance() {
        return balance;
    }
};

int main() {
    Account a;
    a.setBalance(5000);
    cout << "Account balance: " << a.getBalance() << endl;
    
}
