#include <iostream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>

using std::cout;
using std::cin;
using std::map;
using std::pair;
using std::vector;
using std::make_pair;
using std::sort;

int main() {
    int n;
    map<int, pair<int, int> > m;
    int counter = 0;
    while (cin >> n) {
	if (m.count(n)) {
	    m[n].second++;
	}
	else {
	    m[n].second = 1;
	    m[n].first = counter;
	}
	counter++;
    }
    map<int, pair<int, int> >::iterator iter;
    vector<pair<int, pair<int, int> > > v;
    for (iter = m.begin(); iter != m.end(); iter++) {
	v.push_back(make_pair(((iter->second).first), make_pair(iter->first, (iter->second).second)));
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++) {
	cout << v[i].second.first << ' ' << v[i].second.second << "\n";
    }
    return 0;
}
