// Chapter 5, Programming Challenge 26: Using Files-Savings Account Balance Modification
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main()
{
	double yrInterestRate;       // Annual interest rate
	double moInterestRate;       // Monthly interest rate
	double balance;              // Account balance
	double deposited;            // Amount deposited in a single month
	double withDrawn;            // Amount withdrawn in a single month
	double moIntPaid;            // Interest paid in a single month
	double totalDeposits	= 0; // Total of all deposits
	double totalWithdrawals = 0; // Total of all withdrawals
	double totalInterest	= 0; // Total interest earned
	int    months;               // Number of months passed
   
	// File stream object.
    ofstream outFile;

	// Open a file "Report.txt" to save the report to.
    outFile.open("Report.txt");

	// Set up the output formatting - set two fractional digits as precision
    outFile << fixed << setprecision(2) << showpoint;

	// Get the annual interest rate.
	cout << "Enter the annual interest rate "
		 << "on the account (e.g. .04): ";
	cin  >> yrInterestRate;
   
	// Validate the interest rate.
	while (yrInterestRate < 0)
	{
		cout << "Interest rate must be non-negative: ";
		cin >> yrInterestRate;
	}
   
	// Get the starting balance.
	cout << "Enter the starting balance: ";
	cin  >> balance;

	// Validate the starting balance.
	while (balance <= 0)
	{
		cout << "The balance must be greater than 0: ";
		cin >> balance;
	}
   
	// Get the number of months that the account
	// has been open.
	cout << "How many months have passed since the ";
	cout << "account was established? ";
	cin  >> months;
   
	// Validate the number of months.
	while (months < 0)
	{
		cout << "Number of months must be non-negative: ";
		cin >> months;
	}
   
	// Calculate the monthly interest rate.
	moInterestRate = yrInterestRate / 12.0;
   
	// Process the transactions.
	for (int count = 1; count <= months; count++)
	{
		// Display the month number.
		cout << "\nMonth " << count << endl;
      
		// Input the amount deposited this month.
		cout << "\tTotal deposits for this month: $";
		cin  >> deposited;
      
		// Validate the amount deposited this month.
		while (deposited < 0)
		{  cout << "\tDeposits must be zero or greater. "
				<< "Please re-enter: n";
			cin  >> deposited;
		} 
      
		// Input the amount withdrawn this month.
		cout << "\tTotal withdrawals for this month: $";
		cin  >> withDrawn;
      
		// Validate the amount withdrawn this month.
		while (withDrawn < 0)
		{  cout << "\tWithdrawals must be zero or greater. "
				<< "Please re-enter: n";
			cin  >> withDrawn;
		} 
      
		// Calculate the totals.
		balance += deposited;          // Add deposits to balance
		totalDeposits += deposited;    // Total of deposits
		balance -= withDrawn;          // Subtract withdrawals from balance
		totalWithdrawals += withDrawn; // Total of withdrawals
      
		// Determine if we have a negative balance.
		if (balance < 0)
		{
            outFile << "\nThe account has a balance of $"
                    << balance << endl;
            outFile << "Because the balance is negative, the account ";
            outFile << "has been closed.\n";
			break;   // Break out of loop! The account is closed.
		}
      
		// Calculate the monthly interest paid.
		moIntPaid = balance * moInterestRate;
      
		// Accumulate the total interest.
		totalInterest += moIntPaid;
      
		// Add the interest to the balance.
		balance += moIntPaid;
	}

	// Write the report.
    outFile << "\nThe ending balance: $"
            << balance << endl;
    outFile << "Total amount of deposits: $"
            << totalDeposits << endl;
    outFile << "Total amount of withdrawals: $"
            << totalWithdrawals << endl;
    outFile << "Total interest earned: $"
            << totalInterest << endl;

	// Close the file.
    outFile.close();
   
	return 0;
}