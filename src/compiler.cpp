#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    cout << "======================================" << endl;
    cout << "        GCC Compilation Module" << endl;
    cout << "======================================" << endl;

    // Compile sample file
    int result = system("g++ sample_codes/c1.cpp -o output");

    // Check compilation result
    if(result == 0)
    {
        cout << "\nCompilation Successful!" << endl;
        cout << "Executable file created successfully." << endl;
    }
    else
    {
        cout << "\nCompilation Failed!" << endl;
        cout << "Errors detected in source code." << endl;
    }

    return 0;
}