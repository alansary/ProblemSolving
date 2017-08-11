#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int max_value = 0, max_index = -1;
    for (int i = 0; i < 100; i++) {
	int value;
	cin >> value;
	if (value > max_value) {
	    max_value = value;
	    max_index = i;
	}
    }
    max_index++;
    cout << max_value << endl;
    cout << max_index << endl;
    return 0;
}
