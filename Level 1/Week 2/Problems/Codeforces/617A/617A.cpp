#include <stdio.h>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    int steps = 0;
    for (int i = 5; i >= 1; i--) {
        if (n >= i) {
	    while (n-i >= 0) {
	        steps++;
	        n -= i;
	    }	
        }
    }
    printf("%d\n", steps);
    return 0;
}
