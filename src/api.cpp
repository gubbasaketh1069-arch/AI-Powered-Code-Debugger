#include "../include/api.h"

#include <iostream>
#include <string>

using namespace std;

string getAISuggestion(const string& code)
{
    if(code.find("cout") != string::npos)
    {
        return "Possible missing semicolon detected near cout statement.";
    }

    return "No obvious issue found.";
}