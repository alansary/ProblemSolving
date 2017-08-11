#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::map;
using std::vector;
using std::pair;
using std::make_pair;
using std::sort;

bool compare_function(pair<int, int> i, pair<int, int> j) {
    return i.second > j.second;
}

int main() {
    int testCases;
    cin >> testCases;
    int candidates, voters;
    while (testCases--) {
	cin >> candidates >> voters;
	int votes[voters][candidates];
	map<int, int> m;
	for (int i = 0; i < voters; i++)
	    for (int j = 0; j < candidates; j++) {
		cin >> votes[i][j];
		if (j == 0) {
		    if (! m.count(votes[i][j])) {
		        m[votes[i][j]] = 1;
		    }
		    else m[votes[i][j]]++;
		}
	    }
	map<int, int>::iterator iter;
	vector<pair<int, int> > results;
	for (iter = m.begin(); iter != m.end(); iter++)
	    results.push_back(make_pair(iter->first, iter->second));
	sort(results.begin(), results.end(), compare_function);
	if (results[0].second > voters/2)
	    cout << results[0].first << " 1\n";
	else {
	    int first_candidate = results[0].first;
	    int second_candidate = results[1].first;
	    int first_counter = 0, second_counter = 0;
	    for (int i = 0; i < voters; i++) {
		for (int j = 0; j < candidates; j++) {
		    if (votes[i][j] == first_candidate) {
			first_counter++;
			break;
		    }
		    else if (votes[i][j] == second_candidate) {
			second_counter++;
			break;
		    }
		}
	    }
	    int winner;
	    if (first_counter > second_counter) winner = first_candidate;
	    else winner = second_candidate;
	    cout << winner << " 2\n";
	}
    }
    return 0;
}
