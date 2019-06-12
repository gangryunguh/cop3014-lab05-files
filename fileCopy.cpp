//
// Created by Gang-Ryung Uh
//
// For "Line comment programming assignment"
//
// This program will prompt the user for the names
// of input and output files.  It will then copy the
// input file to the output file by byte-by-byte
//
//
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    // Prompt the user for an input filename;
    cout << "Enter an input file name: " << flush;
    string infile;
    cin >> infile;

    // Check if the input file can be opened
    ifstream fin;
    fin.open(infile);
    while (!fin) {
        // input file does not exist, prompt the user again
        cout << "Enter an input file name: " << flush;
        string infile;
        cin >> infile;
        fin.open(infile);
    }

    // Prompt the user for an output filename
    cout << "Enter an output file name: " << flush;
    string outfile;
    cin >> outfile;

    // Check if the output file can be opened
    ofstream fout;
    fout.open(outfile);
    while (!fout) {
        // output file cannot open, prompt the user again
        cout << "Enter an output file name: " << flush;
        string outfile;
        cin >> outfile;
        fout.open(outfile);
    }

    // Copy characters from the input file to the output file
    char c;
    while ((c = fin.get()) != EOF)
        fout << c;
    // close the input and output files
    fout.close();
    fin.close();
    return 0;
}