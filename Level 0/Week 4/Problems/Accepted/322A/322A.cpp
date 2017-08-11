#include <iostream>
#include <algorithm>
#include <vector>
#include <utility>

using std::cout;
using std::cin;
using std::vector;
using std::pair;
using std::sort;
using std::make_pair;

bool comparable_function(pair<int, pair<int, int> > i, pair<int, pair<int, int> > j) {
    return i.first < j.first;
}

bool showed(int num, int *nums, int size) {
    for (int i = 0; i < size; i++) {
	if (nums[i] == num) return true;
	if (nums[i] == 0) {
	    nums[i] = num;
	    return false;
	}
    }
}

int main() {
    int boys, girls;
    cin >> boys >> girls;
    int boys_appeared[boys];
    int girls_appeared[girls];
    for (int i = 0; i < boys; i++)
	boys_appeared[i] = 0;
    for (int i = 0; i < girls; i++)
	girls_appeared[i] = 0;
    int songs = 0;
    vector<pair<int, pair<int, int> > > couples;
    for (int i = 1; i <= boys; i++) {
	if (i <= girls) {
	for (int j = i; j <= girls; j++) {
	    if (!showed(i, boys_appeared, boys)) {
		   showed(j, girls_appeared, girls);
		songs++;
		couples.push_back(make_pair(songs, make_pair(i, j)));
	    }
	    else if (!(showed(j, girls_appeared, girls))) {
		showed(i, boys_appeared, boys);
		songs++;
		couples.push_back(make_pair(songs, make_pair(i, j)));
	    }	
	}
	}
	else {
	for (int j = 1; j <= girls; j++) {
            if (!showed(i, boys_appeared, boys)) {
                   showed(j, girls_appeared, girls);
                songs++;
                couples.push_back(make_pair(songs, make_pair(i, j)));
            }
            else if (!(showed(j, girls_appeared, girls))) {
                showed(i, boys_appeared, boys);
                songs++;
                couples.push_back(make_pair(songs, make_pair(i, j)));
            }

	}
	}
    }  
    sort(couples.begin(), couples.end(), comparable_function);
    cout << songs << "\n";
    for (int i = 0; i < couples.size(); i++)
	cout << couples[i].second.first << ' ' << couples[i].second.second << "\n";
    return 0;
}
