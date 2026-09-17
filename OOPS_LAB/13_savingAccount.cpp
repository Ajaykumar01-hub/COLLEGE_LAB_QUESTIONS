#include <iostream>
#include <iomanip>
using namespace std;

class SavingsAccount
{
    double savingsBalance;
    static double annualInterestRate;
public:
    SavingsAccount(double balance)
    {
        savingsBalance = balance;
    }
    void calculateMonthlyInterest()
    {
        double interest;

        interest = savingsBalance * annualInterestRate / 12;
        savingsBalance = savingsBalance + interest;
    }
    static void modifyInterestRate(double rate)
    {
        annualInterestRate = rate;
    }

    void display()
    {
        cout << fixed << setprecision(2);
        cout << "Balance = Rs " << savingsBalance << endl;
    }
};

// Definition of static variable
double SavingsAccount::annualInterestRate = 0.0;

int main()
{
    SavingsAccount saver1(2000.00);
    SavingsAccount saver2(3000.00);

    // Interest rate = 4%
    SavingsAccount::modifyInterestRate(0.04);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout << "After 4% interest:\n";
    saver1.display();
    saver2.display();

    // Interest rate = 5%
    SavingsAccount::modifyInterestRate(0.05);
    saver1.calculateMonthlyInterest();
    saver2.calculateMonthlyInterest();
    cout << "\nAfter 5% interest:\n";
    saver1.display();
    saver2.display();

    return 0;
}