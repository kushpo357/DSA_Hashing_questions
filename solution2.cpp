#include <bits/stdc++.h>
using namespace std;

int solve(vector<int>& v, int n) {
    int ans = 0;
    int cnt = 0;
    unordered_map<int, int> mp; 
    mp[0] = -1;

    for (int i = 0; i < n; i++) {
        cnt ^= (1 << v[i]);

        if (mp.count(cnt)) ans = max(ans, i - mp[cnt]);
        else mp[cnt] = i;
    }

    return ans;
}

int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0; i<n; i++) {
            cin>>v[i];
        }
        cout<<solve(v, n)<<endl;
    }
    return 0;
}
