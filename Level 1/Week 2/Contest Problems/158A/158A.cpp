#include <stdio.h>
using namespace std;
int main() {
    int participants, kthPlace;
    scanf("%d%d", &participants, &kthPlace);
    int scores[participants];
    for (int i = 0; i < participants; i++) {
	scanf("%d", &scores[i]);
    }
    int advancers = 0;
    for (int i = 0; i < participants; i++) {
	if (scores[i] >= scores[kthPlace-1] && scores[i] > 0) {
	    advancers++;
	}
	else break;
    }
    printf("%d\n", advancers);
    return 0;
}
