#include<iostream>
using namespace std;
int main() {
    short t, N;
    cin >> t;
    for (int i = 1; i <= t; i++) {
	cin >> N;
	int heights[N];
	for (int x = 0; x < N; x++) {
	    cin >> heights[x];
	}
	short total_high_jumps = 0, total_low_jumps = 0;
	int initial;
	for (int x = 1; x < N; x++) {
	    initial = heights[x-1];
	    if (initial < heights[x]) total_high_jumps++;
	    else if (initial > heights[x]) total_low_jumps++;
	}
	cout << "Case " << i << ": " << total_high_jumps << ' ' << total_low_jumps << endl;
    }
    return 0;
}
