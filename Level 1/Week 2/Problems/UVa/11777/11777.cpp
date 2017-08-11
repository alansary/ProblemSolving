#include <stdio.h>
using namespace std;
int avg(int x, int y, int z) {
    int max1, max2;
    if (x >= y && x >= z) {
	max1 = x;
	if (y >= z) max2 = y;
	else max2 = z;
    }
    else if (y >= x && y >= z) {
	max1 = y;
	if (x >= z) max2 = x;
	else max2 = z;
    }
    else {
	max1 = z;
	if (x >= y) max2 = x;
	else max2 = y;
    }
    return (max1 + max2) / 2;
}
int main() {
    int testCases;
    scanf("%d", &testCases);
    int total;
    int term1, term2, finalExam, attendance, classTest1, classTest2, classTest3;
    for (int i = 1; i <= testCases; i++) {
	scanf("%d%d%d%d%d%d%d", &term1, &term2, &finalExam, &attendance, &classTest1, &classTest2, &classTest3);
	total = term1 + term2 + finalExam + attendance + avg(classTest1, classTest2, classTest3);
	if (total >= 90)
	    printf("Case %d: A\n", i);
	else if (total >= 80 && total < 90)
	    printf("Case %d: B\n", i);
	else if (total >= 70 && total < 80)
	    printf("Case %d: C\n", i);
	else if (total >= 60 && total < 70)
	    printf("Case %d: D\n", i);
	else if (total < 60)
	    printf("Case %d: F\n", i);
    }
    return 0;
}
