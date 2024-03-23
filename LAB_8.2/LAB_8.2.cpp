#include <iostream>
#include <string>
using namespace std;

size_t MaxConsecutiveSpaces(const string s) {
    size_t maxSpaces = 0;
    size_t currentSpaces = 0;

    for (char c : s) {
        if (c == ' ') {
            currentSpaces++;
        }
        else {
            if (currentSpaces > maxSpaces) {
                maxSpaces = currentSpaces;
            }
            currentSpaces = 0;
        }
    }

    
    if (currentSpaces > maxSpaces) {
        maxSpaces = currentSpaces;
    }

    return maxSpaces;
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);
    cout << "Maximum consecutive spaces: " << MaxConsecutiveSpaces(str) << endl;
    return 0;
}
