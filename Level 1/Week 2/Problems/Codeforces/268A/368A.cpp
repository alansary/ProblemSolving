#include <stdio.h>
using namespace std;
int main() {
    int teams;
    scanf("%d", &teams);
    int home_colors[teams], guest_colors[teams];
    for (int i = 0; i < teams; i++)
	scanf("%d%d", &home_colors[i], &guest_colors[i]);
    int count = 0;
    for (int i = 0; i < teams; i++) { //home
	for (int j1 = i+1; j1 < teams; j1++) { //guest
	    if (home_colors[i] == guest_colors[j1]) count++;
	}
	for (int j2 = i-1; j2 >=0; j2--) { //guest
	    if (home_colors[i] == guest_colors[j2]) count++;
	}
    }
    printf("%d\n", count);
    return 0;
}
