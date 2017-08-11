#include <iostream>

using std::cout;
using std::cin;

int main() {
    int y, w;
    cin >> y >> w;
    if (y == w) {
	int count = 0;
	while (y++ != 6) count++;
	count++;
	int die = 6;
	if ((count % 2 == 0) && (die % 2 == 0)) {
	    count /= 2; die /= 2;
	}
	if ((count % 3 == 0) && (die % 3 == 0)) {
	    count /= 3; die /= 3;
	}
	cout << count << "/" << die << "\n";
    }
    else {
        int max = (y>w) ? y : w;
	int count = 0;
	while (max++ != 6) count++;
	count++;
	int die = 6;
	if ((count % 2 == 0) && (die % 2 == 0)) {
	    count /= 2; die /= 2;
	}
	if ((count % 3 == 0) && (die % 3 == 0)) {
	    count /= 3; die /= 3;
	}
	cout << count << "/" << die << "\n";
    }
    return 0;
}
