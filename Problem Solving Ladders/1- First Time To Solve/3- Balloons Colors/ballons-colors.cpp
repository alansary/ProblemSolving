#include <iostream>

using std::cout;
using std::cin;

int main() {
    int T;
    cin >> T;
    int N, X, Y;
    int temp;
    while (T--) {
	bool testX = false, testY = false;
	cin >> N >> X >> Y;
	cin >> temp;
	if (temp == X) testX = true;
	for (int i = 1; i < N-1; i++) cin >> temp;
	cin >> temp;
	if (temp == Y) testY = true;
	if (testX && testY) cout << "BOTH\n";
	else if (testX && !testY) cout << "EASY\n";
	else if (!testX && testY) cout << "HARD\n";
	else cout << "OKAY\n";
    }
    return 0;
}
