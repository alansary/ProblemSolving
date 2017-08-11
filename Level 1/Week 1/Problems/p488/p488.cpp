#include<stdio.h>
using namespace std;
int main() {
    // Changing cout and cin with printf and scanf resulted accepted solution
    // Using cout and cin results in Time Limit Exceeded
    int t;
    scanf("%d", &t);
    int amplitude;
    int frequency;
    for (int i = 0; i < t; i++) {
	scanf("%d", &amplitude);
	scanf("%d", &frequency);
	for (int j = 1; j <= frequency; j++) {
	    for (int k = 1; k <= amplitude; k++) {
		for (int k2 = 1; k2 <= k; k2++)
		    printf("%d", k);
		printf("%s", "\n");
	    }
	    for (int l = amplitude-1; l >= 1; l--) {
		for (int l2 = 1; l2 <= l; l2++)
		    printf("%d", l);
		printf("%s", "\n");
	    }
	    if ((i != t-1) || (j != frequency))
		printf("%s", "\n");
	}
    }
    return 0;
}
