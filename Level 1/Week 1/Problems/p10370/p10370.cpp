#include<stdio.h>
#include<iomanip>
using namespace std;
int main() {
    int c, n;
    double totalGrades, result;
    scanf("%d", &c);
    for (short i = 0; i < c; i++) {
	scanf("%d", &n);
	int grades[n];
	totalGrades = 0.0;
	result = 0.0;
	for (short j = 0; j < n; j++) {
	    scanf("%d", &grades[j]);
	    totalGrades += grades[j];
	}
	totalGrades /= n;
	for (short k = 0; k < n; k++) {
	    if (grades[k] > totalGrades) result += 1;
	}
	printf("%.3lf%\n", (result / n) * 100);
    }
    return 0;
}
