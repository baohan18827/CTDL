#include <bits/stdc++.h>
using namespace std;

int main () {
    int n, x;
    vector<int>a;
    cin>>x;
    int s;
    while (cin>>s)
        a.push_back(s);
    int vt=-1;
    int mx=INT_MIN;
    for (int i=0;i<a.size();i++) {
        if (a[i]<=x&&a[i]>mx) {
            mx=a[i];
            vt=i;
        }
    }
    cout<<vt;
}