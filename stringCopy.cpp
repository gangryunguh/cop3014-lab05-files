//
// Created by Gang-Ryung Uh on 2019-06-24.
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

    ifstream ifs;
    ifs.open(infile);

    if (!ifs) {
        cerr << "File " << infile << " doesn't exist. " << endl;
        exit(1);
    }

    return 0;
}

