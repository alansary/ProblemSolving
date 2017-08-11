#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::endl;
using std::vector;
using std::pair;
using std::sort;

bool compare_function(pair <int, int> i, pair <int, int> j) {
    return (i.first < j.first) && (i.second > j.second);
}

int main() {
    int numLabtops;
    cin >> numLabtops;
    vector< pair<int, int> > labtops; // >> should be separated by a space
    bool poor_alex = true;
    int price, quality;
    for (int i = 0; i < numLabtops; i++) {
	cin >> price >> quality;
	pair <int, int> temp;
	temp.first = price; temp.second = quality;
	labtops.push_back(temp);
    }
    sort(labtops.begin(), labtops.end());
    for (int i = 0; i < labtops.size()-1; i++) {
	if ((labtops[i].first < labtops[i+1].first) && (labtops[i].second > labtops[i+1].second)) {
	    poor_alex = false;
	    break;
	}
    }
    if (!poor_alex) cout << "Happy Alex" << endl;
    else cout << "Poor Alex" << endl;
    return 0;
}
