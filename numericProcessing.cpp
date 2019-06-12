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
    ifstream fin;
	// Open the file.
    fin.open("Random.txt");
    if (fin.fail() /* !fin */) {
        cerr << "Input file open errors (:" << endl;
        exit(1);
    }
   
	// Read the numbers from the file and accumulate total
    while (fin >> number) {
        total += number;
        count++;
    }
	// Close the file.
    fin.close();
   
	// Calculate the average of the numbers.
    average = 0.0;
	if (count)
        average = total / count;
   
	// Display the results.
	cout << "Number of numbers: " << count << endl
		 << "Sum of the numbers: " << total << endl
		 << "Average of the numbers: " << average
		 << endl;
        
	return 0;
}