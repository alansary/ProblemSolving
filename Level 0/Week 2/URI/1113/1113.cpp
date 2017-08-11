#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int x, y;
    while ((cin >> x >> y) && (x != y)) {
	if (x < y) {
	    cout << "Crescente" << endl;
	}
	else cout << "Decrescente" << endl;
    }
    return 0;
}
