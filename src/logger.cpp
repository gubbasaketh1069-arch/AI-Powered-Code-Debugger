#include "../include/logger.h"
#include <fstream>
#include <iostream>
using namespace std;
void writeLog(const string& message)
{
    ofstream logFile("logs/session_log.txt", ios::app);

    if(!logFile)
    {
        cout << "Unable to create log file." << endl;
        return;
    }
    logFile << message << endl;

    logFile.close();
}
