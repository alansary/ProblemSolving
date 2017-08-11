#include <stdio.h>
using namespace std;
void switchNames(char *first_name, char *second_name) {
    int i = 0;
    while (second_name[i] != '\0') {
	first_name[i] = second_name[i];
	i++;
    }
    first_name[i] = '\0';
}
int main() {
    int n;
    scanf("%d", &n);
    int min_day = 0, min_month = 0, min_year = 0;
    int max_day = 33, max_month = 13, max_year = 1000000;
    int temp_day, temp_month, temp_year;
    char temp_name[15], min_name[15], max_name[15];
    bool switchMax, switchMin;
    for (int i = 0; i < n; i++) {
	scanf("%s%d%d%d", &temp_name, &temp_day, &temp_month, &temp_year);
	switchMax = false; switchMin = false;
	if (temp_year < max_year) {
	    switchMax = true;
	}
	else if (temp_year == max_year) {
	    if (temp_month < max_month) {
		switchMax = true;
	    }
	    else if (temp_month == max_month) {
		if (temp_day < max_day) {
		    switchMax = true;
		}
	    }
	}
	if (switchMax) {
	    max_year = temp_year;
	    max_month = temp_month;
	    max_day = temp_day;
	    switchNames(max_name, temp_name);
	}
	if (temp_year > min_year) {
	    switchMin = true;
	}
	else if (temp_year == min_year) {
	    if (temp_month > min_month) {
		switchMin = true;
	    }
	    else if (temp_month == min_month) {
		if (temp_day > min_day) {
		    switchMin = true;
		}
	    }
	}
	if (switchMin) {
            min_year = temp_year;
            min_month = temp_month;
            min_day = temp_day;
            switchNames(min_name, temp_name);
	}
    }
    printf("%s\n%s\n", min_name, max_name);
    return 0;
}
