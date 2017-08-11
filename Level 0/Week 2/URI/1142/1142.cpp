#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int n;
    cin >> n;
    int j = 1;
    for (int i = 0; i < n; i++) {
	//lines
	for (int x = 0; x < 3; x++) {
	    cout << j++ << ' ';
	}
	cout << "PUM" << endl;
	j += 1;
    }
    return 0;
}
