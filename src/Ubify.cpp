// copied with permission from https://gist.github.com/Lomeli12/80695668fee036068d4d and modified slightly

#include <string>
#include <iostream>

using namespace std;

char replacementChar[12] = { 'a', 'e', 'i', 'o', 'u', 'y'};

string ubify(string baseString);

bool matches(char c);

int main(int argc, char *argv[]) {

    if (argc >= 2) {
        for (int i = 1; i < argc-1; i++) {
            cout << ubify(argv[i]).c_str() << " ";
        }

        cout << ubify(argv[argc-1]) << endl;

    } else {
        string line = "";

        cout << "> " << flush;
        getline(cin, line);

        if (!line.empty()) {
            cout << ubify(line) << endl;
        }
    }

    return 0;
}

string ubify(string baseString) {
    string out = "";
    unsigned int size = baseString.size();

    for (unsigned int i = 0; i < size; i++) {
        char ch = baseString[i];

        if (matches(ch)) {
            if (isupper(ch)) {
                out += "Ub";
            } else {
                out += "ub";
            }
        } else {
            out += ch;
        }
    }

    return out;
}

bool matches(char c) {

    for (unsigned int i = 0; i < sizeof(replacementChar); i++) {
        if (tolower(c) == replacementChar[i]) {
            return true;
        }
    }

    return false;
}
