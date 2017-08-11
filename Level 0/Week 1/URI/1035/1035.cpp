#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    if ((B > C) && (D > A) && (C+D > A+B) && (C+D > 0) && (A%2 == 0))
	cout << "Valores aceitos" << endl;
    else
	cout << "Valores nao aceitos" << endl;
    return 0;
}
