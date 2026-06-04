#include "../include/compiler.h"

#include <iostream>
#include <cstdlib>

using namespace std;

bool compileFile(const string& filename)
{
    string command =
        "g++ " + filename + " -o output.exe > compile_errors.txt 2>&1";

    int result = system(command.c_str());

    if(result == 0)
    {
        cout << "\nCompilation Successful!" << endl;
        return true;
    }
    else
    {
        cout << "\nCompilation Failed!" << endl;
        cout << "Check compile_errors.txt for details." << endl;
        return false;
    }
}