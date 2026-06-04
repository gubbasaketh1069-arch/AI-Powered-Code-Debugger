# AI-Powered Code Debugger

## Project Overview

AI-Powered Code Debugger is a C++ application that helps programmers identify and debug errors in source code. The system performs static analysis, compiles code using GCC, generates debugging reports, and provides AI-assisted debugging suggestions.

## Features

* Static code analysis
* Detection of common syntax errors
* GCC-based code compilation
* Compilation error reporting
* Logging and report generation
* AI-assisted debugging module
* Menu-driven user interface

## Project Structure

AI-Powered-Code-Debugger/

* include/ → Header files
* src/ → Source files
* sample_codes/ → Test programs
* logs/ → Generated logs
* reports/ → Debugging reports
* diagrams/ → Project diagrams

## Technologies Used

* C++
* GCC Compiler
* Git & GitHub
* Gemini API (AI Module)
* Visual Studio Code

## How to Run

Compile the project:

g++ src/main.cpp src/analyzer.cpp src/compiler.cpp src/api.cpp src/logger.cpp -o debugger

Run the executable:

.\debugger.exe

## Menu Options

1. Load Source File
2. Run Static Analysis
3. Query Gemini AI
4. Compile Code
5. Generate Report
6. Exit

## Sample Test Files

* missing_semicolons.cpp
* missing_braces.cpp
* return_syntax_error.cpp
* correct_code.cpp

## Team Members

* Saketh Gubba
* Appidi Vivek Reddy
* K.Bharath Reddy
* M.Kruthika
* R.Anjali

## Future Enhancements

* Complete live Gemini API integration
* Automatic code correction
* GUI-based interface
* Multi-language support

## Project Status

Working prototype completed and successfully tested.
