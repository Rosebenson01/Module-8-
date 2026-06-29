/* Rose Benson
* AirGead Banking
* June 7th, 2026
*/

#include "InvestmentAccount.h"
#include <iostream>

using namespace std;

int main() {

    InvestmentAccount account;

    // Collect user information
    account.GetUserInput();

    // Display entered values
    account.DisplayInputData();

    cout << "\nPress Enter to continue...";
    cin.ignore();
    cin.get();

    // Display required reports
    account.DisplayReportWithoutDeposits();

    cout << endl;

    account.DisplayReportWithDeposits();

    return 0;
}

