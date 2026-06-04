#include <iostream>
#include "../include/analyzer.h"
#include "../include/compiler.h"
#include "../include/api.h"
#include "../include/logger.h"
using namespace std;

void showMenu()
{
    cout << "\n======================================" << endl;
    cout << "      AI-Powered Code Debugger" << endl;
    cout << "======================================" << endl;

    cout << "1. Load Source File" << endl;
    cout << "2. Run Static Analysis" << endl;
    cout << "3. Query Gemini AI" << endl;
    cout << "4. Compile Code" << endl;
    cout << "5. Generate Report" << endl;
    cout << "6. Exit" << endl;

    cout << "======================================" << endl;
    cout << "Enter your choice: ";
}

int main()
{
    int choice;

    do
    {
        showMenu();
        cin >> choice;

        switch(choice)
        {
            case 1:
                cout << "\n[INFO] Loading source file...\n";
                break;

            case 2:
                cout << "\n[INFO] Running static analysis...\n";
                break;

            case 3:
                cout << "\n[INFO] Sending code to Gemini AI...\n";
                break;

            case 4:
                cout << "\n[INFO] Compiling updated code...\n";
                break;

            case 5:
                cout << "\n[INFO] Generating debugging report...\n";
                break;

            case 6:
                cout << "\nExiting AI-Powered Code Debugger...\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while(choice != 6);

    return 0;
}