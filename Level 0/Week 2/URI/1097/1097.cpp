#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int J = 7;
    for (int I = 1; I <= 9; I += 2) {
	for (int i = 0; i < 3; i++, J--) {
	    cout << "I=" << I << " J=" << J << endl;
	}
	J += 5;
    }
    return 0;
}
