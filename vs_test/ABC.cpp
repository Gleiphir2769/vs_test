#include "ABC.h"

#include <iostream>
#include "ABC.h"
using std::cout;
using std::ios_base;
using std::endl;
using std::string;

// Abstract Base Class
AcctABC::AcctABC(const string& s, long an, double bal) {
    fullName = s;
    acctNum = an;
    balance = bal;
}

void AcctABC::Deposit(double amt) {
    if (amt < 0)
        cout << "Negative deposit not allowed; "
        << "deposit is cancelled.\n";
    else
        balance += amt;
}

//void AcctABC::Withdraw(double amt) {
//    balance -= amt;
//}

//// protected methods for formatting
//AcctABC::Formatting AcctABC::SetFormat() const {
//    // set up ###.## format
//    Formatting f;
//    f.flag =
//        cout.setf(ios_base::fixed, ios_base::floatfield);
//    f.pr = cout.precision(2);
//    return f;
//}

AcctABC::Formatting AcctABC::SetFormat() const {
    Formatting f;
    f.flag =
        cout.setf(ios_base::fixed, ios_base::floatfield);
    f.pr = cout.precision(2);
    return f;
}

void AcctABC::Restore(Formatting& f) const {
    cout.setf(f.flag, ios_base::floatfield);
    cout.precision(f.pr);
}