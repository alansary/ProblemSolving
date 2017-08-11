#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
    int min_length;
    scanf("%d", &min_length);
    int months = 12;
    int length[months];
    for (int i = 0; i < months; i++) {
	scanf("%d", &length[i]);
    }
    sort(length, length+12);
    int count = 0, my_count = 0;
    for (int i = 11; i >= 0; i--) {
	if (my_count >= min_length) break;
	count++;
	my_count += length[i];
    }
    if (my_count >= min_length) printf("%d\n", count);
    else printf("-1\n");
    return 0;
}
