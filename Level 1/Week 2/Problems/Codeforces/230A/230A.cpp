#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
    int KiritoStrength, dragons;
    scanf("%d%d", &KiritoStrength, &dragons);
    int dS[dragons], dB[dragons];
    for (int i = 0; i < dragons; i++)
	scanf("%d%d", &dS[i], &dB[i]);
    int count = 0;
    bool check;
    while (true) {
	check = false;
	for (int i = 0; i < dragons; i++) {
	    if (dS[i] < KiritoStrength && dS[i] != -1) {
		KiritoStrength += dB[i];
		dS[i] = -1;
		count++;
		check = true;
	    }
	}
	if (count == dragons) {
	    printf("%s", "YES\n");
	    break;
	}
	if (!check) {
	    printf("%s", "NO\n");
	    break;
	}
    }
    return 0;
}
