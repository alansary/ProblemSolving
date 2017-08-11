#include <iostream>
#include <map>

using std::cout;
using std::cin;
using std::map;

void update(int *univ, int id) {
    int i;
    for (i = 0; i < 100; i++) {
	if (univ[i] == id) break;
	if (univ[i] == 0) break;
    }
    univ[i] = id;
}

int main() {
//ACM-ACPC regional contest
    int testCases;
    cin >> testCases;
    int N, M;
    while (testCases--) {
	cin >> N >> M;
	int assignment[N][M];
	for (int i = 0; i < N; i++)
	    for (int j = 0; j < M; j++)
		cin >> assignment[i][j];
	int univ[100];
	for (int i = 0; i < 100; i++) univ[i] = 0;
	for (int i = 0; i < N; i++) {
	    for (int j = 0; j < M; j++) {
		int current = assignment[i][j];
		if (current == -1) continue;
		if (i != 0) { // (i-1)(j) exists
		    if (current == assignment[i-1][j]) {
			update(univ, current);
			continue;
		    }
		}
		if (i != N-1) { // (i+1)(j) exists
		    if (current == assignment[i+1][j]) {
			update(univ, current);
			continue;
		    }
		}
		if (j != 0) { // (i)(j-1) exists
		    if (current == assignment[i][j-1]) {
			update(univ, current);
			continue;
		    }
		}
		if (j != M-1) { // (i)(j+1) exists
		    if (current == assignment[i][j+1]) {
			update(univ, current);
			continue;
		    }
		}
		if ((i != 0) && (j != 0)) { // (i-1)(j-1) exists
		    if (current == assignment[i-1][j-1]) {
			update(univ, current);
			continue;
		    }
		}
		if ((i != N-1) && (j != 0)) { // (i+1)(j-1) exists
		    if (current == assignment[i+1][j-1]) {
			update(univ, current);
			continue;
		    }
		}
		if ((i != 0) && (j != M-1)) { // (i-1)(j+1) exists
		    if (current == assignment[i-1][j+1]) {
			update(univ, current);
			continue;
		    }
		}
		if ((i != N-1) && (j != M-1)) { // (i+1)(j+1) exists
		    if (current == assignment[i+1][j+1]) {
			update(univ, current);
			continue;
		    }
		}
	    }
	}
	int counter = 0;
	for (int i = 0; i < 100; i++) {
	    if (univ[i] != 0) counter++;
	    else break;
	}
	cout << counter << "\n";
    }
    return 0;
}
