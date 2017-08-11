#include <stdio.h>
using namespace std;
int main() {
    int students, times, count = 0, numTimes;
    scanf("%d%d", &students, &times);
    while (students--) {
	scanf("%d", &numTimes);
	if (numTimes+times <= 5) count++;
    }
    printf("%d\n", count/3);
    return 0;
}
