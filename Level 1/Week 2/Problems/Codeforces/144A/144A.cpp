#include <stdio.h>
using namespace std;
int main() {
    int numSoldiers;
    scanf("%d", &numSoldiers);
    int min_height = 101, max_height = 0;
    int temp;
    int min_height_index, max_height_index;
    for (int i = 0; i < numSoldiers; i++) {
	scanf("%d", &temp);
	if (temp > max_height) {
	    max_height = temp;
	    max_height_index = i;
	}
	if (temp <= min_height) {
	    min_height = temp;
	    min_height_index = i;
	}
    }
    if (min_height_index < max_height_index) min_height_index++;
    min_height_index = numSoldiers-1-min_height_index;
    printf("%d\n", max_height_index+min_height_index);
    return 0;
}
