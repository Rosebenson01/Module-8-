/* Rose Benson
* AirGead Banking
* June 7th, 2026
*/

#ifndef INVESTMENTACCOUNT_H
#define INVESTMENTACCOUNT_H

class InvestmentAccount {
private:
    double initialInvestment;
    double monthlyDeposit;
    double annualInterest;
    int numberOfYears;

public:
    InvestmentAccount();

    void GetUserInput();
    void DisplayInputData() const;
    void DisplayReportWithoutDeposits() const;
    void DisplayReportWithDeposits() const;
};

#endif
