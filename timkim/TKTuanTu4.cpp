#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, x;
    vector<int>a;
    cin>>x;
    int s;
    while (cin>>s)
        a.push_back(s);
    int mx=INT_MIN;
    bool check=false;
    for (int i=0;i<a.size();i++) {
        if (a[i]<=x&&a[i]>mx) {
            mx=a[i];
        }
    }
    for (int i=0;i<a.size();i++) {
        if (a[i]==mx) {
            cout<<i<<" ";
            check=true;
        }
    }
    if (!check) cout<<"-1";
}