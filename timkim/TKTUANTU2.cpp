#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, x;
    vector<int>a;
    cin>>n>>x;
    for (int i=0;i<n;i++) {
        int s;
        cin>>s;
        a.push_back(s);
    }
    bool check=false;
    for (int i=0;i<n;i++) {
        if (a[i]==x) {
            cout<<i<<' ';
            check=true;
        }
    }
    if (!check) cout<<"-1";
}