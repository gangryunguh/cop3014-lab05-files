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

    bool inString = false;
    int lineNumber = 0;
    char c;
    while ((c = ifs.get()) != EOF) {
        if (c == '"') {
            cout << c;
            inString = !inString;
            if (!inString)
                cout << "\tLine: " << lineNumber << endl;
        }
        else if (inString)
            cout << c << flush;

        if (c == '\n')
            lineNumber++;
    }

    if (inString) {
        cerr << "Unterminated string\n";
        exit(1);
    }

    ifs.close();
    return 0;
}

