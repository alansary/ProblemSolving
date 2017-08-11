#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int x, y;
    while ((cin >> x >> y) && (x != 0) && (y != 0)) {
	if ((x > 0) && (y > 0))
	    cout << "primeiro" << endl;
	else if ((x > 0) && (y < 0))
	    cout << "quarto" << endl;
	else if ((x < 0) && (y > 0))
	    cout << "segundo" << endl;
	else if ((x < 0) && (y < 0))
	    cout << "terceiro" << endl;
    }
    return 0;
}
