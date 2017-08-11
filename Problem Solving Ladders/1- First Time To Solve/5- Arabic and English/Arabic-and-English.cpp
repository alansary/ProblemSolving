#include <iostream>

using std::cout;
using std::cin;

int main() {
    int testCases;
    cin >> testCases;
    while (testCases--) {
	int numWords;
	cin >> numWords;
	char words[numWords][11];
	bool english_word = false;
	bool arabic_word = false;
	int english_index = -1;
	for (int i = 0; i < numWords; i++) {
	    cin >> words[i];
	    if (words[i][0] == '#') arabic_word = true;
	    else {
		english_word = true;
		english_index = i;
	    }
	}
	if (arabic_word && !english_word) {
	    for (int i = 0; i < numWords; i++)
		cout << words[i] << ' ';
	    cout << "\n";
	}
	else if (english_word && !arabic_word) {
	    for (int i = 0; i < numWords; i++)
		cout << words[i] << ' ';
	    cout << "\n";
	}
	else {
	    for (int i = english_index+1; i < numWords; i++) {
		cout << words[i] << ' ';
	    }
	    cout << words[english_index];
	    if (english_index != 0) {
		for (int i = 0; i < english_index; i++)
		    cout << ' ' << words[i];
		cout << "\n";
	    }
	    else cout << "\n";
	}
    }
    return 0;
}
