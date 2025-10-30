#include <iostream>
#include <string>
using namespace std;

// Check for variable declaration
bool isVariableDeclaration(string line) {
    string types[] = {"int", "float", "double", "char", "bool", "string"};
    for (string type : types) {
        // Check if line starts with type AND contains semicolon
        if (line.find(type) == 0 && line.find(";") < line.length())
            return true;
    }
    return false;
}

// Check for function declaration (prototype)
bool isFunctionDeclaration(string line) {
    string types[] = {"int", "float", "double", "char", "bool", "void", "string"};
    for (string type : types) {
        if (line.find(type) == 0 &&
            line.find("(") < line.length() &&
            line.find(")") < line.length() &&
            line.find(";") < line.length())
            return true;
    }
    return false;
}

// Check for function definition
bool isFunctionDefinition(string line) {
    string types[] = {"int", "float", "double", "char", "bool", "void", "string"};
    for (string type : types) {
        if (line.find(type) == 0 &&
            line.find("(") < line.length() &&
            line.find(")") < line.length() &&
            line.find("{") < line.length())
            return true;
    }
    return false;
}

int main() {
    string line;
    cout << "Enter a line of code: ";
    getline(cin, line);

    if (isVariableDeclaration(line))
        cout << "✅ Proper Variable Declaration" << endl;
    else if (isFunctionDeclaration(line))
        cout << "✅ Proper Function Declaration" << endl;
    else if (isFunctionDefinition(line))
        cout << "✅ Proper Function Definition" << endl;
    else
        cout << "❌ Not a valid declaration or definition" << endl;

    return 0;
};
