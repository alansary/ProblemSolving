#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[105];
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }

    int ans = 1000000 , idx , idx2;
    for(int i = 0 ; i < n-1 ; i++){
        if(abs(arr[i] - arr[i+1]) < ans){
            ans = abs(arr[i] - arr[i+1]);
            idx = i + 1;
            idx2 = i + 2;
        }
    }

    if(abs(arr[n-1] - arr[0]) < ans)
        cout << n << " " << 1 << endl;
    else
        cout << idx << " " << idx2 << endl;



    return 0;
}
