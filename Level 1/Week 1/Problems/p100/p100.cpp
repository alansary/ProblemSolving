#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
    int i, j, cycle_length, max_cycle_length;
    while (cin >> i >> j) {
    // main problem was EOF
        cout << i << " " << j << " "; // Get ride of sentinel
	if (i > j) { // Swap
	    i = i ^ j;
	    j = i ^ j;
	    i = i ^ j;
	}
	max_cycle_length = 0;
	for (int x = i; x <= j; x++) {
	    cycle_length = 1; // Get ride of another increment
	    int n = x;
	    while (n != 1) {
		cycle_length++;
		if (n & 1) n = 3*n+1; //odd number
		else n = n / 2;
	    }
	    if (max_cycle_length < cycle_length) max_cycle_length = cycle_length;
	}
	printf("%d\n", max_cycle_length);
    }
    return 0;
}
