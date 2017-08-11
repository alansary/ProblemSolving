#include <iostream>
using namespace std;
bool isAscending(short *a);
bool isDescending(short *a);
int main() {
    short N, a[10];
    cin >> N;
    cout << "Lumberjacks:" << endl;
    for (int i = 0; i < N; i++) {
	for (int x = 0; x < 10; x++)
	    cin >> a[x];
        if (isAscending(a) || isDescending(a))
	    cout << "Ordered" << endl;
	else
	    cout << "Unordered" << endl;
    }
    return 0;
}
bool isAscending(short *a) {
    for (int i = 0; i < 10; i++) {
	if ((a[i+1] < a[i]) && (i+1 < 10))
	    return false;
    }
    return true;
}
bool isDescending(short *a) {
    for (int i = 0; i < 10; i++) {
	if ((a[i] < a[i+1]) && (i+1 < 10))
	    return false;
    }
    return true;
}
