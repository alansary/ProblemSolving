#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    for (int I = 1; I <= 9; I += 2) {
	for (int J = 7; J >= 5; J--) {
	    cout << "I=" << I << " J=" << J << endl;
	}
    }
    return 0;
}
