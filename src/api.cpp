#include "../include/api.h"

#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>

using namespace std;

string getAISuggestion(const string& code)
{
    // Read API key
    ifstream config("config.txt");

    string line;
    string apiKey;

    if(getline(config, line))
    {
        size_t pos = line.find('=');

        if(pos != string::npos)
        {
            apiKey = line.substr(pos + 1);
        }
    }

    config.close();

    // Create prompt file
    ofstream prompt("prompt.txt");

    prompt <<
        "You are a C++ debugging assistant.\n"
        "Analyze the following code and identify errors.\n\n"
        << code <<
        "\n\nProvide:\n"
        "1. Error description\n"
        "2. Suggested fix\n";

    prompt.close();

    // Temporary message
    return "Gemini API setup complete. Request execution will be added next.";
}