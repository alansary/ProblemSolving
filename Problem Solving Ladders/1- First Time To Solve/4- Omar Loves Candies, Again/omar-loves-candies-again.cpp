#include <iostream>
#include <map>

using std::cout;
using std::cin;
using std::map;

int main() {
    int T;
    cin >> T;
    char string[101];
    while (T--) {
	map<char, int> data;
	cin >> string; int i = 0;
	char c;
	while ((c = string[i++]) != '\0') {
	    if (!data.count(c)) {
		data[c] = 1;
	    }
	    else data[c]++;
	}
	int max = 0;
	char max_char;
	map<char, int>::iterator iter;
	for (iter = data.begin(); iter != data.end(); iter++) {
	    if (iter->second > max) {
		max = iter->second;
		max_char = iter->first;
	    }
	}
	cout << max << ' ' << max_char << "\n";
    }
    return 0;
}
