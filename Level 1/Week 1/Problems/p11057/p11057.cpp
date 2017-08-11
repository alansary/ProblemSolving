#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int N;
    int M, i, j, difference;
    while (cin >> N) { // EOF
	difference = 1000001;
	int a[N];
	for (int k = 0; k < N; k++)
	    cin >> a[k];
	cin >> M;
	for (int x = 0; x < N; x++) {
	    for (int y = x+1; y < N; y++) {
		int temp;
		if (a[x] <= a[y]) {
		    temp = a[y] - a[x];
		}
		else { // a[y] < a[x]
		    temp = a[x] - a[y];
		}
		if ((a[x] + a[y] == M) && (temp < difference)) {
		    if (a[x] <= a[y]) {
			i = a[x]; j = a[y];
		    }
		    else {
			i = a[y]; j = a[x];
		    }
		    difference = temp;
		}
	    }
	}
	cout << "Peter should buy books whose prices are " << i << " and " << j << ".\n" << endl;
    }

    return 0;
}
