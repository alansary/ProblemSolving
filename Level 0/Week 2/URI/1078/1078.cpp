#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int N;
    cin >> N;
    for (int i = 1; i <= 10; i++) {
	cout << i << " x " << N << " = " << i*N << endl;
    }
    return 0;
}
