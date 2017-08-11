#include <bits/stdc++.h>
using namespace std;



int main()
{
    int arr[105] = {0};
    int n , m;
    cin >> n >> m;

    int x , y;
    for(int i = 0 ; i < n ; i++){
        cin >> x;
        for(int j = 0 ; j < x ; j++){
            cin >> y;
            arr[y] = 1;
        }
    }

    int valid = 1;
    for(int i = 1 ; i <= m ; i++){
        if(arr[i] == 0)
            valid = 0;
    }

    if(valid == 1)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;


    return 0;
}
