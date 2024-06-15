// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> v, int n) {
    map<vector<int>, int>mp;
    for (auto i : v) {
        vector<int>tmp(10);
        while(i != 0) {
            tmp[i%10]++;
            i /= 10;
        }
        mp[tmp]++;
    }
    
    int ans = 0;
    for(auto i : mp) {
        if(i.second>1) ans += i.second;
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
        for(int i = 0; i<n; i++) cin>>v[i];
        
        cout<<solve(v, n)<<endl;
    }
    

    return 0;
}
