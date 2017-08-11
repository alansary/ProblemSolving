#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int a, b;
    cin >> a >> b;
    int awins = 0, draw = 0, bwins = 0;
    int diff1, diff2;
    for (int i = 1; i <= 6; i++) {
	if (a >= i) diff1 = a-i;
	else diff1 = i-a;
	if (b >= i) diff2 = b-i;
	else diff2 = i-b;
	if (diff1 < diff2) awins++;
	else if (diff2 < diff1) bwins++;
	else draw++;
    }
    cout << awins << ' ' << draw << ' ' << bwins << endl;
    return 0;
}
