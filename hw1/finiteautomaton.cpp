// FA for the language of all binary strings that have at least three symbols and whose first and last symbols are different
#include <cstring>
#include <iostream>
#include <string>

using namespace std;

bool finiteautomaton(char *arg) {
    cout << arg << endl;
    return(true);
}

int main() {
    string userinput;
    cout << "Add a binary string into the finite automaton. pick a sequnce made from two letters (alphanumerical) and press Return." << endl;
    cin >> userinput;
    char *cstringuserinput = new char[userinput.length() + 1];
    strcpy(cstringuserinput, userinput.c_str());
    // for (int i = 0; i < strlen(cstringuserinput); ++ i) {

    // }
    cout << finiteautomaton(cstringuserinput);
}