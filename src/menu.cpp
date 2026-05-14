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
                cout << "\n[INFO] Running static analysis...\n";
                break;

            case 3:
                cout << "\n[INFO] Querying Gemini AI...\n";
                break;

            case 4:
                cout << "\n[INFO] Compiling code...\n";
                break;

            case 5:
                cout << "\n[INFO] Generating report...\n";
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