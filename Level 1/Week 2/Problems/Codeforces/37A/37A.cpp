#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
    int num_bars;
    scanf("%d", &num_bars);
    int bars[num_bars];
    for (int i = 0; i < num_bars; i++) {
	scanf("%d", &bars[i]);
    }
    sort(bars, bars+num_bars);
    int count = 0, max_count = 0, partial_count;
    for (int i = 0; i < num_bars;) {
	partial_count = 0;
	int current = bars[i++];
	partial_count++;
	while (current == bars[i]) {
	    i++;
	    partial_count++;
	}
	if (partial_count > max_count) max_count = partial_count;
	count++;
    }
    printf("%d %d\n", max_count, count);
    return 0;
}
