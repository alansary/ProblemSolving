#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n, m;
    cin >> n >> m;
    int solns = 0;
    int a, b;
    for (a = 0; ; a++) {
	b = 0;
	if ((a*a+b > n) || (a+b*b > m)) {
	    break;
	}
	for (; ; b++) {
	    if ((a*a+b == n) && (a+b*b == m)) {
		solns++;
	    }
	    if ((a*a+b > n) || (a+b*b > m)) {
		break;
	    }
	}
    }
    cout << solns << endl;
    return 0;
}
