#include <iostream>

using namespace std;

void showMenu()
{
    cout << "\n=====================================\n";
    cout << "     AI-Powered Code Debugger\n";
    cout << "=====================================\n";

    cout << "1. Load Source File\n";
    cout << "2. Run Static Analysis\n";
    cout << "3. Query Gemini AI\n";
    cout << "4. Compile Code\n";
    cout << "5. Generate Report\n";
    cout << "6. Exit\n";

    cout << "=====================================\n";
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

    writeLog("Static analysis completed for: " + filename);

    break;
}
           case 3:
{
    string code;

    cout << "Enter code snippet: ";
    cin.ignore();

    getline(cin, code);

    string suggestion = getAISuggestion(code);

    cout << "\nAI Suggestion:\n";
    cout << suggestion << endl;
    writeLog(suggestion);

    cout << "\nSuggestion saved to logs/session_log.txt" << endl;

    break;
}
          case 4:
{
    string filename;

    cout << "Enter file path: ";
    cin >> filename;

    bool success = compileFile(filename);

    if(success)
    {
        writeLog("Compilation Successful: " + filename);
    }
    else
    {
        writeLog("Compilation Failed: " + filename);
    }

    break;
}
case 5:
{
    cout << "\n===== DEBUGGING REPORT =====" << endl;
    cout << "Check logs/session_log.txt" << endl;
    cout << "All analyzer, AI, and compiler results are stored there." << endl;

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