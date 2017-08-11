#include <stdio.h>
using namespace std;
int main() {
    int problems, distance, numProblems = 0;
    scanf("%d%d", &problems, &distance);
    int totalTime = distance;
    int i = 1;
    while (((totalTime + i*5) <= 240) && i <= problems) {
	totalTime += i*5;
	numProblems++;
	i++;
    }
    printf("%d\n", numProblems);
    return 0;
}
