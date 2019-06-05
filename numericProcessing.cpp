// Chapter 5, Programming Challenge 24: Using Files-Numeric Processing
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// Variables
	int count = 0;       // To count numbers
	double number;       // To hold a number from the file
	double total = 0.0;  // Accumulator
	double average;      // To hold the average
   
	// File stream object

   
	// Open the file.

   
	// Read the numbers from the file and accumulate total

	// Close the file.

   
	// Calculate the average of the numbers.

   
	// Display the results.
	cout << "Number of numbers: " << count << endl
		 << "Sum of the numbers: " << total << endl
		 << "Average of the numbers: " << average
		 << endl;
        
	return 0;
}