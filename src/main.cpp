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
{
    string filename;

    cout << "Enter file path: ";
    cin >> filename;

    analyzeFile(filename);

    break;
}
            case 3:
{
    cin.ignore();

    string code;

    cout << "\nPaste your code snippet:\n";
    getline(cin, code);

    string suggestion = getAISuggestion(code);

    cout << "\n===== GEMINI AI RESPONSE =====\n";
    cout << suggestion << endl;

    writeLog(suggestion);

    break;
}
           case 4:
{
    string filename;

    cout << "Enter file path: ";
    cin >> filename;

    compileFile(filename);

    break;
}

            case 5:
{
    cout << "\n===== DEBUGGING REPORT =====" << endl;
    cout << "Static Analysis: Completed" << endl;
    cout << "Compiler Module: Available" << endl;
    cout << "AI Module: Available" << endl;
    cout << "Logs stored in logs/session_log.txt" << endl;
    break;
}

            case 6:
                cout << "\nExiting AI-Powered Code Debugger...\n";
                break;

            default:
                cout << "\nInvalid choice! Please try again.\n";
        }

    } while(choice != 6);

    return 0;
}