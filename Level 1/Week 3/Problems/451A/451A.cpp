#include <iostream>

using std::cout;
using std::cin;
using std::endl;

void switchCase(char *c) {
    if (*c == 'A') *c = 'M';
    else *c = 'A';
}

int main() {
    int n, m;
    cin >> n >> m;
    char last = 'B';
    while ((n > 0) && (m > 0)) {
	n--; m--;
	switchCase(&last);
    }
    if (last == 'A') cout << "Akshat" << endl;
    else cout << "Malvika" << endl;
    return 0;
}
