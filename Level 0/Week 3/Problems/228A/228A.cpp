#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::sort;

int main() {
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    sort(a, a+4);
    int count = 0;
    for (int i = 0; i < 4; i++) {
	int current = a[i];
	while (a[i+1] == current) {
	    i++;
	    count++;
	}
    }
    cout << count << endl;
    return 0;
}
