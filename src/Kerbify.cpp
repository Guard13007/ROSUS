// copied with permission from https://gist.github.com/Lomeli12/80695668fee036068d4d and modified a lot

#include <string>
#include <iostream>

using namespace std;

// forward declarations
string kerbify(string baseString);
bool matches(char previous, char c);

int main(int argc, char *argv[]) {

    if (argc >= 2) {
        for (int i = 1; i < argc-1; i++) {
            cout << kerbify(argv[i]).c_str() << " ";
        }

        cout << kerbify(argv[argc-1]) << endl;

    } else {
        string line = "";

        cout << "> " << flush;
        getline(cin, line);

        if (!line.empty()) {
            cout << kerbify(line) << endl;
        }
    }

    return 0;
}

string kerbify(string baseString) {
    string out = "";
    unsigned int size = baseString.size();

    if (matches(' ', baseString[0])) {
        if (isupper(baseString[0])) {
            out += "K";
        } else {
            out += "k";
        }
    }

    for (unsigned int i = 1; i < size; i++) {
        char previous = baseString[i-1];
        char ch = baseString[i];

        if (matches(previous, ch)) {
            if (isupper(ch)) {
                out += "K";
            } else {
                out += "k";
            }
        } else {
            out += ch;
        }
    }

    return out;
}

bool matches(char previous, char c) {
    if (previous != ' ') {
      return false;
    }

    char replacementChar[12] = { 'a', 'e', 'i', 'o', 'u', 'y'};

    for (unsigned int i = 0; i < sizeof(replacementChar); i++) {
        if (tolower(c) == replacementChar[i]) {
            return false;
        }
    }

    return true;
}
