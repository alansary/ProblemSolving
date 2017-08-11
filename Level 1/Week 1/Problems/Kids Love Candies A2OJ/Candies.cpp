#include<stdio.h>
using namespace std;
int main() {
    int t, n, k, max_kids, candies;
    scanf("%d", &t);
    while (t--) {
	max_kids = 0;
	scanf("%d%d", &n, &k);
	while (n--) {
	    scanf("%d", &candies);
	    max_kids += (candies / k);
	}
	printf("%d\n", max_kids);
    }
    return 0;
}
