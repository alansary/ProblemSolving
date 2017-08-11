#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int a[5][5];
    int row, column;
    for (int i = 0; i < 5; i++) {
	for (int j = 0; j < 5; j++) {
	    cin >> a[i][j];
	    if (a[i][j] == 1) {
		row = i;
		column = j;
	    }
	}
    }
    row++; column++;
    row -= 3; column -= 3;
    if (row < 0) row *= -1;
    if (column < 0) column *= -1;
    cout << row+column << endl;
    return 0;
}
