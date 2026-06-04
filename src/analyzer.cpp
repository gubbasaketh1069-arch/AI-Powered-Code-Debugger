#include "../include/analyzer.h"

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void analyzeFile(const string& filename)
{
    ifstream file(filename);

    if(!file)
    {
        cout << "Error: Cannot open file." << endl;
        return;
    }

    string line;
    int lineNumber = 0;

    int openBraces = 0;
    int closeBraces = 0;

    cout << "\n===== STATIC ANALYSIS REPORT =====\n";

    while(getline(file, line))
    {
        lineNumber++;

        // Count braces
        for(char ch : line)
        {
            if(ch == '{')
                openBraces++;

            if(ch == '}')
                closeBraces++;
        }

        // Missing semicolon detection
        if(line.find("cout") != string::npos &&
           line.find(";") == string::npos)
        {
            cout << "Line "
                 << lineNumber
                 << ": Possible missing semicolon." << endl;
        }
    }

    if(openBraces > closeBraces)
    {
        cout << "Possible missing closing brace '}'" << endl;
    }

    if(closeBraces > openBraces)
    {
        cout << "Possible extra closing brace '}'" << endl;
    }

    cout << "===== ANALYSIS COMPLETE =====\n";
}