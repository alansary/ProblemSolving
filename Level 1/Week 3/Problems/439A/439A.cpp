#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    int songs, eventTime;
    cin >> songs >> eventTime;
    int times[songs];
    for (int i = 0; i < songs; i++) {
	cin >> times[i];
    }
    int jokes = 0, current = 0;
    bool fail = false;
    while (eventTime > 0) {
	if (current == songs-1) { // Last song
	    eventTime -= times[current++];
	    if (eventTime < 0) {
		fail = true;
		break;
	    }
	    else if (eventTime == 0) {
		break;
	    }
	    else {
		jokes += eventTime / 5;
		break;
	    }
	}
	else {
	    eventTime -= times[current++];
	    eventTime -= 10;
	    jokes += 2;
	    if (eventTime <= 0) {
		fail = true;
		break;
	    }
	}
    }
    if (fail) cout << "-1" << endl;
    else cout << jokes << endl;
    return 0;
}
