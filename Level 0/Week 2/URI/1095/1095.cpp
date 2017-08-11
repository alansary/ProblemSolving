#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int I = 1, J = 60;
    while (J >= 0) {
	cout << "I=" << I << " J=" << J << endl;
	I += 3; J -= 5;
    }
    return 0;
}
