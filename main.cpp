#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

int main() {
    const int MAX_COUNT = 10;
    string familyNames[MAX_COUNT];

    for (int i = 0; i < MAX_COUNT; ++i) {
        cout << "Enter " << i + 1 << " family names:";
        std::cin >> familyNames[i];
    }

    cout << "--------------" << endl;

    char key = ' ';
    while (true) {
        int apartmentNumber;
        cout << "Enter apartment number (1 to " << MAX_COUNT << " inclusive):";
        std::cin >> apartmentNumber;
        if (apartmentNumber >= 1 && apartmentNumber <= MAX_COUNT) {
            cout << "\t- " << familyNames[apartmentNumber - 1] << " live in this apartment!" << endl;
            cout << "Enter Y to get more information about the next apartment:";
            std::cin >> key;
            if (key == 'Y' || key == 'y') continue; else break;
        } else {
            cout << "Error. This apartment does not exist" << endl;
        }
    }

    cout << "The program has ended. See you!" << endl;
}
