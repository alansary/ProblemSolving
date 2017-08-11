#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    double J = 1;
    for (double I = 0; I <= 2; I += .2) {
	for (int i = 0; i < 3; i++, J++) {
	    cout << "I=" << I << " J=" << J << endl;
	}
	J -= 3; J += .2;
    }
    return 0;
}
