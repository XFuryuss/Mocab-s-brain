// Imoroved Brain for Mocab, coded and provided by Dalatexcoder
// Heavy Inspiration and Original Edition by Xfuryus 
#include <iostream>
#include <chrono>
#include <thread>
#include <random>
#include <stdexcept>
using namespace std;
int main() {
    cout << "Mocab's Brain - Improved C++ Edition by Dalatexcoder\n";
    cout << "\nBoot Started\n";
    cout << "Handling Libraries\n";
    this_thread::sleep_for(chrono::milliseconds(1000));
    for (int j = 0; j <= 99; j++) {
    	cout << "Loading... " << j << "%\n";
    	random_device rd;
    	mt19937 gen(rd());
    	uniform_int_distribution<> distrib(-20, 20);
    	if (j <= 95) {
    		this_thread::sleep_for(chrono::milliseconds(distrib(gen) + 40));
    	} else {
    		this_thread::sleep_for(chrono::milliseconds(distrib(gen) + j * 150 - 14210));
    	}
    }
    int idealTime = 3939 / 6.9 * 3.9;
    this_thread::sleep_for(chrono::milliseconds(idealTime));
    cout << "Loading... 100%\n";
    this_thread::sleep_for(chrono::milliseconds(25));
    cout << "Loading libraries finished!\n\n";
    this_thread::sleep_for(chrono::milliseconds(50));
    cout << "A new version of Mocab is avaliable(3.9)! Do you want to download it(Y/N)?\n> ";
    string update;
    cin >> update;
    if (update == "y" || update == "Y") {
    	cout << "Starting Update...";
    } else if (update == "n" || update == "N") {
    	throw runtime_error("Update is Mandatory!");
    } else {
    	cout << "\nError: I don't understand that. :(";
    	this_thread::sleep_for(chrono::milliseconds(50));
    	cout << "\nStarting Update: Update is Mandatory!";
    }
    this_thread::sleep_for(chrono::milliseconds(750));
    string hash = "";
	for (int l = 0; l <= 99; l++) {
    	hash = "";
    	for (int m = 0; m < l; m++) {
    		hash = hash + "#";
    	}
    	wcout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    	this_thread::sleep_for(chrono::milliseconds(5));
    	wcout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    	this_thread::sleep_for(chrono::milliseconds(5));
    	wcout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n|";
    	this_thread::sleep_for(chrono::milliseconds(25));
    	cout << hash << "| " << l << "% finished";
    	this_thread::sleep_for(chrono::milliseconds(50));
    }
    this_thread::sleep_for(chrono::milliseconds(200));
    wcout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n|";
    this_thread::sleep_for(chrono::milliseconds(195));
    cout << "####################################################################################################|100% finished";
    //This was the best I could do.
    this_thread::sleep_for(chrono::milliseconds(5));
    cout << "\nFinished Updating Mocab!\n\n";
    this_thread::sleep_for(chrono::milliseconds(100));
    // UI displays the current number of active brain cells in Mocab's brain.
    cout << "Mocab's currently usning '0' brincels.\n";
    string brainStatus;
    cout << "\nDo you want to turn on Mocab's brain? Allowed commands: y/n :D\n";
    cout << "> ";
    cin >> brainStatus;
    // Clear any leftover input[Not needed for this instance in C++]

    // Function that manages Mocab's brain
    if (brainStatus == "y" || brainStatus == "Y") {
        string braincells;
        cout << "\nHow many brincels to activate?\n";
        cout << "> ";
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
    return 39; // Thanks for looking at my code, this is in appreciation of her.
}
