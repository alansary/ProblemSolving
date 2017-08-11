#include <stdio.h>
using namespace std;
int gcd(int a, int b) {
    if (a == 0) return b;
    else if (b == 0) return a;
    else {
	if (a < b) {
	    a = a ^ b;
	    b = a ^ b;
	    a = a ^ b;
	}
	for (int i = b; i >= 1; i--) {
	    if (a % i == 0 && b % i == 0)
		return i;
	}
    }
}
int main() {
    int a, b, n;
    scanf("%d%d%d", &a, &b, &n);
    int last_player = -1;
    int winner;
    while (n > 0) {
	if (last_player == 0) {
	    n -= gcd(b, n);
	    if (n > 0) last_player = 1;
	    else if (n < 0) {
		winner = 0;
		break;
	    }
	    else {
		winner = 1;
		break;
	    }
	}
	else if (last_player == 1) {
	    n -= gcd(a, n);
	    if (n > 0) last_player = 0;
	    else if (n < 0) {
		winner = 1;
		break;
	    }
	    else {
		winner = 0;
		break;
	    }
	}
        else if (last_player == -1) {
            n -= gcd(a, n);
            if (n > 0) last_player = 0;
            else if (n < 0) {
                winner = 1;
                break;
            }
            else {
                winner = 0;
                break;
            }
        }
    }
    printf("%d\n", winner);
    return 0;
}
