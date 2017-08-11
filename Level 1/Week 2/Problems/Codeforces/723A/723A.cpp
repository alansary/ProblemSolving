#include <stdio.h>
#include <algorithm>
using namespace std;
int main() {
    int distances[3], i = 3;
    while (i--) {
	scanf("%d", &distances[i]);
    }
    sort(distances, distances+3);
    printf("%d\n", (distances[2] - distances[1]) + (distances[1] - distances[0]));
    return 0;
}
