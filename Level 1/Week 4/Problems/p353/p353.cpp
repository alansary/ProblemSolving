#include <iostream>
#include <set>
#include <string>

using std::cout;
using std::cin;
using std::set;

int len(char *string) {
    int length = 0;
    int i = 0; char c;
    while ((c = string[i++]) != '\0') length++;
    return length;
}

bool is_palindrome(char *string) {
    int length = len(string);
    if (length == 0) return false;
    else if (length == 1) return true;
    else {
	int i, j;
	for (j = length-1, i = 0; j >= 0, i < length; j--, i++) {
	    if (string[i] != string[j]) return false;
	}
	return true;
    }
}

void checker(char *string, set<std::string> *palindromes) {
    int length = len(string);
    if (length == 0) return;
    else {
	for (int i = 0; i < length; i++) {
	    int iterator = 0;
	    while (iterator++ < length) {
		char temp_string[81];
		int iter = 0;
	        for (int j = i; j < iterator; j++) {
		    temp_string[iter++] = string[j];
	        }
		temp_string[iter] = '\0';
		if (len(temp_string) != 0)
		    if (is_palindrome(temp_string))
		        (*palindromes).insert(std::string(temp_string));
	    }
	}
    }
}

int main() {
    char string[81];
    while (cin >> string) {
	set<std::string> palindromes;
	if (len(string) > 0) {
	    cout << "The string '" << string << "' contains ";
	    checker(string, &palindromes);
	    cout << palindromes.size() << " palindromes.\n";
	}
    }
    return 0;
}
