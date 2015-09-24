// copied with permission from https://gist.github.com/Lomeli12/80695668fee036068d4d and modified heavily

#include <string>
#include <iostream>
#include <cstdlib> //for rand() / srand()
#include <time.h>  //for time() (to seed srand())

using namespace std;

// forward declarations
string deUbify(string ubString);
bool matches(char c1, char c2);
char selectVowel();

int main(int argc, char *argv[]) {

    srand(time(NULL)); //seed our randomization!

    if (argc >= 2) {
        for (int i = 1; i < argc-1; i++) {
            cout << deUbify(argv[i]).c_str() << " ";
        }

        cout << deUbify(argv[argc-1]) << endl;

    } else {
        string line = "";

        cout << "> " << flush;
        getline(cin, line);

        if (!line.empty()) {
            cout << deUbify(line) << endl;
        }
    }

    return 0;
}

string deUbify(string ubString) {
    string out = "";
    unsigned int size = ubString.size();

    for (unsigned int i = 0; i < size; i++) {
        char c1 = ubString[i];
        char c2 = ubString[i+1];

        if (matches(c1, c2)) {
            if (isupper(c1)) {
                out += toupper(selectVowel());
                i++;
            } else {
                out += selectVowel();
                i++;
            }
        } else {
            out += c1;
        }
    }

    return out;
}

bool matches(char c1, char c2) {

    if (tolower(c1) == 'u' && tolower(c2) == 'b') {
        return true;
    } else {
        return false;
    }

}

char selectVowel() {
    char vowels[12] = { 'a', 'e', 'i', 'o', 'u', 'y'};

    return vowels[(rand() % 6)]; //%6 for 6 options, *2 to offset cause unicode (?)
}
