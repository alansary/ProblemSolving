#include<iostream>
using namespace std;
int main() {
    short tTestCases;
    cin >> tTestCases;
    short nPlayers, kPlayer, pPasses;
    for (int caseNum = 1; caseNum <= tTestCases; caseNum++) {
	cin >> nPlayers >> kPlayer >> pPasses;
	for (int pass = 1; pass <= pPasses; pass++) {
	    kPlayer++;
	    if (kPlayer > nPlayers) kPlayer = 1;
	}
	cout << "Case " << caseNum << ": " << kPlayer << endl;
    }
    return 0;
}
