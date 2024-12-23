#include <iostream>
using namespace std;
class Account {
public:
virtual void calculateInterest() = 0;
};
class SavingsAccount : public Account {
int balance, rate, time;
public:
SavingsAccount(int b, int r, int t) : balance(b), rate(r), time(t) {}
void calculateInterest() override {
cout << "Savings Account Interest: " << (balance * rate * time) / 100 << endl;
}
};
class CurrentAccount : public Account {
int balance, fee;
public:
CurrentAccount(int b, int f) : balance(b), fee(f) {}
void calculateInterest() override {
cout << "Balance after fee deduction: " << balance - fee << endl;
}
};
int main() {
int type;
cin >> type;
if (type == 1) {
int balance, rate, time;
cin >> balance >> rate >> time;
SavingsAccount sa(balance, rate, time);
sa.calculateInterest();
} else if (type == 2) {
int balance, fee;
cin >> balance >> fee;
CurrentAccount ca(balance, fee);
ca.calculateInterest();
} else {
cout << "Invalid account type." << endl;
}
return 0;
}
