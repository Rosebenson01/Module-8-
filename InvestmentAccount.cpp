/* Rose Benson
* AirGead Banking
* June 7th, 2026
*/

#include "InvestmentAccount.h"
#include <iostream>
#include <iomanip>

using namespace std;

// Default constructor
InvestmentAccount::InvestmentAccount() {
    initialInvestment = 0.0;
    monthlyDeposit = 0.0;
    annualInterest = 0.0;
    numberOfYears = 0;
}

// Gather user input
void InvestmentAccount::GetUserInput() {
    cout << "Initial Investment Amount: $";
    cin >> initialInvestment;

    cout << "Monthly Deposit: $";
    cin >> monthlyDeposit;

    cout << "Annual Interest (%): ";
    cin >> annualInterest;

    cout << "Number of Years: ";
    cin >> numberOfYears;
}

// Display entered values
void InvestmentAccount::DisplayInputData() const {
    cout << "\n**********************************" << endl;
    cout << "********** Data Input ************" << endl;
    cout << "Initial Investment Amount: $" << initialInvestment << endl;
    cout << "Monthly Deposit: $" << monthlyDeposit << endl;
    cout << "Annual Interest: " << annualInterest << "%" << endl;
    cout << "Number of Years: " << numberOfYears << endl;
    cout << "**********************************" << endl;
}

// Report without monthly deposits
void InvestmentAccount::DisplayReportWithoutDeposits() const {
    double balance = initialInvestment;

    cout << "\nBalance and Interest Without Additional Monthly Deposits" << endl;
    cout << "==================================================================" << endl;
    cout << left << setw(10) << "Year"
        << setw(25) << "Year End Balance"
        << setw(25) << "Year End Earned Interest" << endl;
    cout << "------------------------------------------------------------------" << endl;

    for (int year = 1; year <= numberOfYears; year++) {

        double yearlyInterest = 0.0;

        for (int month = 1; month <= 12; month++) {

            double monthlyInterest =
                balance * ((annualInterest / 100) / 12);

            yearlyInterest += monthlyInterest;
            balance += monthlyInterest;
        }

        cout << fixed << setprecision(2);
        cout << left << setw(10) << year
            << "$" << setw(24) << balance
            << "$" << yearlyInterest << endl;
    }
}

// Report with monthly deposits
void InvestmentAccount::DisplayReportWithDeposits() const {
    double balance = initialInvestment;

    cout << "\nBalance and Interest With Additional Monthly Deposits" << endl;
    cout << "==================================================================" << endl;
    cout << left << setw(10) << "Year"
        << setw(25) << "Year End Balance"
        << setw(25) << "Year End Earned Interest" << endl;
    cout << "------------------------------------------------------------------" << endl;

    for (int year = 1; year <= numberOfYears; year++) {

        double yearlyInterest = 0.0;

        for (int month = 1; month <= 12; month++) {

            balance += monthlyDeposit;

            double monthlyInterest =
                balance * ((annualInterest / 100) / 12);

            yearlyInterest += monthlyInterest;
            balance += monthlyInterest;
        }

        cout << fixed << setprecision(2);
        cout << left << setw(10) << year
            << "$" << setw(24) << balance
            << "$" << yearlyInterest << endl;
    }
}
