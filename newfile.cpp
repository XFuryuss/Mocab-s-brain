// Brain for Mocab, coded and provided by XFuryus
// Converted to C++ by dalatexcoder
#include <iostream>
using namespace std;
int main() {
    
    // UI displays the current number of active brain cells in Mocab's brain.
    cout << "Mocab's currently usning '0' brincels.\n";
    string brainStatus;
    cout << "\nDo you want to turn on Mocab's brain? Allowed commands: y/n :D\n";
    cout << "-> ";
    cin >> brainStatus;
    // Clear any leftover input[Not needed for this instance in C++]

    // Function that manages Mocab's brain
    if (brainStatus == "y" || brainStatus == "n") {
        string braincells;
        cout << "\nHow many brincels to activate?\n";
        cout << "-> ";
        cin >> braincells;
        try {
        	int braincells_int = stoi(braincells);
        	if (braincells_int <= 0) {
            	cout << "\nWhat are you doing!? He already has '0' brincels pls. :(\n";
        	} else if (braincells_int == 1) {
            	cout << "\nMocab's currently usning '1' brincel.\nMocab: Quack!\n";
        	} else {
            	cout << "\nSori Mocab doesn't support using more than '1' brincel. ;(\n";
        	}
        } catch (...) {
        	cout << "\nError: I don't recognize that command. :(\n";
        }
        
    } else if (brainStatus == "n" || brainStatus == "N") {
        cout << "\nI see you like your Mocab vanilla. :)\n";
    } else {
        cout << "\nError: I don't recognize that command. :(\n";
    }
    return 39;
}