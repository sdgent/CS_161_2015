// Author: Steven Gentry
// Created:1/12/15
// Last Modified:1/18/15
// Description: loanPayments.cpp
// simple program that takes 3 inputs from user to calculate monthly payment, total amount paid, and
// interest. This information is output to console

#include <iostream>
#include <iomanip>// needed for setprecision and fixed
#include <cmath> // needed for pow function


using namespace std;

int main()
{
    double interest,loan,monthPayment;
    int payments;
    cout << "Monthly interest?" << endl;
    cin >> interest;
    interest=interest/100; // convert to decimal
    cout << "Number of payments?" << endl;
    cin >> payments;
    cout << "Loan Amount?"<< endl;
    cin >> loan;
    // calculate monthly payment
    monthPayment = interest * pow((1+interest),payments)/((pow((1+interest),payments))-1)*loan;
    cout << fixed << setprecision(2);
    cout << "Loan Amount $ " << loan << endl;
    cout << "Monthly Interest rate " << interest*100 << "%" << endl;
    cout << "Number of Payments " << payments << endl;
    cout << "Monthly Payment $" << monthPayment << endl;
    // calculate amount paid
    cout << "Amount Paid Back $" << payments * monthPayment << endl;
    // calculate interest paid
    cout << "Interest Paid $" << (payments * monthPayment)- loan;
    return 0;
}
