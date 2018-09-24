#include <iostream>
using namespace std;

int main() {

    // Variables
    int empNum;
    double grossPay,
           stateTax,
           fedTax,
           fica,
           totalGrossPay = 0,
           totalStateTax = 0,
           totalFedTax = 0,
           totalFica = 0;

    // Prompt to enter employee number
    cout << "Enter your employee number: ";
    cin >> empNum;

    // Weekly Payroll Report
    while (empNum != 0) {

        // Gross Pay
        cout << "Enter the gross pay: ";
        cin >> grossPay;
        while (grossPay < 0) {
            cout << "Error. The value you entered "
                    "must be greater than 0.";
            cout << "Try again:";
            cin >> grossPay;
        }
        totalGrossPay += grossPay;

        // State Tax
        cout << "Enter the state tax: ";
        cin >> stateTax;
        while (stateTax > grossPay) {
            cout << "Error. State Tax cannot "
                    "be greater than gross pay.";
            cout << "Try again: ";
            cin >> stateTax;
        }
        totalStateTax += stateTax;

        // Federal Tax
        cout << "Enter the federal tax: ";
        cin >> fedTax;
        while (fedTax > grossPay) {
            cout << "Error. Federal Tax cannot "
                    "be greater than gross pay.";
            cout << "Try again: ";
            cin >> fedTax;
        }
        totalFedTax += fedTax;

        // FICA
        cout << "Enter the FICA withholdings: ";
        cin >> fica;
        while (fica > grossPay) {
            cout << "Error. FICA cannot "
                    "be greater than gross pay.";
            cout << "Try again: ";
            cin >> fica;
        }
        totalFica += fica;

        // Prompts user to repeat loop for
        // another employee number, or quit.
        cout << "Enter another employee number to fill \n"
                "out another report, or enter 0 to quit: ";
        cin >> empNum;
    }

    // Net Pay
    double netPay = totalGrossPay - (totalFedTax +
                                     totalFica +
                                     totalStateTax);

    // Print final results
    cout << "Total for gross pay: $" << totalGrossPay << endl;
    cout << "Total for state tax: $" << totalStateTax << endl;
    cout << "Total for federal tax: $" << totalFedTax << endl;
    cout << "Total for FICA: $" << fica << endl;
    cout << "Net pay: $" << netPay;

    return 0;
}