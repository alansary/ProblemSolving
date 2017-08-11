#include<iostream>

using namespace std;

int main() {
    short T;
    int x1, y1, x2, y2;
    cin >> T;
    while (T--) {
	cin >> x1 >> y1 >> x2 >> y2;
        // sort the numbers
        if (x1 > y1){ int temp = x1; x1 = y1; y1 = temp; }
	if (x1 > x2){ int temp = x1; x1 = x2; x2 = temp; }
	if (x1 > y2){ int temp = x1; x1 = y2; y2 = temp; }
	if (y1 > x2){ int temp = y1; y1 = x2; x2 = temp; }
	if (y1 > y2){ int temp = y1; y1 = y2; y2 = temp; }
	if (x2 > y2){ int temp = x2; x2 = y2; y2 = temp; }
	if (x1 == y1 && y1 == x2 && x2 == y2) cout << "square" << endl;
	else if (x1 == y1 && x2 == y2) cout << "rectangle" << endl;
	else if (x1 + y1 + x2 > y2) cout << "quadrangle" << endl;
	else cout << "banana" << endl;
    }
    return 0;
}
