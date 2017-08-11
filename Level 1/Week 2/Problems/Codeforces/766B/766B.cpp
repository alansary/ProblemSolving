#include <iostream>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::sort;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
	cin >> a[i];
    sort(a, a+n);
    bool yes = false;
    for (int i = 0; i < n-2; i++) {
	if ((a[i] + a[i+1]) > a[i+2]) {
	    yes = true;
	    cout << "YES" << endl;
	    break;
	}
    }
    if (!yes) cout << "NO" << endl;
    return 0;
}
