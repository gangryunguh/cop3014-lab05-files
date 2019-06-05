// Chapter 5, Programming Challenge 25: Using Files-Student Line Up
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
	string name;		// To hold a student's name
	string front;		// To hold the least alphabetic value
	string back;		// To hold the greatest alphabetic value
	ifstream inFile;	// To hold the input file

	// Open the file - "LineUp.txt".


	// Read the first student's name from the file.


	// Set front and back equal to the first student's name.

	// Read the remaining student's names from the file to update front and back.

	// Close the file.


	// Display the name of the student who is in the
	// front of the line.
	cout << front << " is in the front.\n";

	// Display the name of the student who is in the
	// back of the line.
	cout << back << " is in the back.\n\n";

	return 0;
}