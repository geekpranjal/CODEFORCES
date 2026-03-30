#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        map<int,int> freq;
        for(int x : v) {
            freq[x]++;
        }

        if(freq.size() == 1) {
            cout << "YES\n";
        }
        else if(freq.size() == 2) {
            auto it = freq.begin();
            int f1 = it->second;
            it++;
            int f2 = it->second;

            if(abs(f1 - f2) <= 1) cout << "YES\n";
            else cout << "NO\n";
        }
        else {
            cout << "NO\n";
        }
    }

    return 0;
}