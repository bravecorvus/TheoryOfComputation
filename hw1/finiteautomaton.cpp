// FA for the language of all binary strings that have at least three symbols and whose first and last symbols are different
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

bool finiteautomaton(char *arg) {
    if (strlen(arg) < 3) {
        return(false);
    }
    char binaryfirst = arg[0];
    char binarysecond;
    for (int i = 0; i < strlen(arg); ++ i) {
        if (arg[i] != binaryfirst) {
            binarysecond = arg[i];
            break;
        }
    } 
    for (int i = 0; i < strlen(arg); ++i) {
        if (arg[i] != binaryfirst && arg[i] != binarysecond) {
            return(false);
        }
    }  
    if (arg[0] != arg[strlen(arg)-1]) {
        return(true);
    } else {
        return(false);
    }
}

int main() {
    string userinput;
    cout << "Add a binary string into the finite automaton. pick a sequnce made from two letters (alphanumerical) and press Return.\nEnter 'exit' then Return to exit program" << endl;
    while(true) {
        cin >> userinput;
        if (userinput == "exit") {
            break;
        }
        char *cstringuserinput = new char[userinput.length() + 1];
        strcpy(cstringuserinput, userinput.c_str());
        cout << boolalpha << finiteautomaton(cstringuserinput) << "\n" << endl;
    }
}