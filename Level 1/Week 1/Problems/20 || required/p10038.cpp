#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  int n;
  while(cin >> n) {
    int seq[n];
    int parse[n];
    bool notJolly = false;
    for (int i = 0; i < n; i++) {
	cin >> seq[i];
	parse[i] = i;
    }
    for (int i = 0; i < n-1; i++) {
	int diff = seq[i] - seq[i+1];
	if (diff < 0) diff *= -1;
	if (diff > 0 && diff <= n-1) {
	    parse[diff] = 0;
	}
	else {
	    notJolly = true;
	    break;
	}
    }
    if (!notJolly) {
	for (int i = 0; i < n; i++) {
	    if (parse[i] != 0) {
		notJolly = true;
	 	break;
	    }
	}
	if (!notJolly) cout << "Jolly" << endl;
	else cout << "Not jolly" << endl;
    }
    else {
	cout << "Not jolly" << endl;
    }
  }
  return 0;
}
