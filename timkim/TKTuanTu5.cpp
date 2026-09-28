#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,x,y;
    vector<int>a;
    cin>>n>>x>>y;
    for (int i=0;i<n;i++) {
        int s;
        cin>>s;
        a.push_back(s);
    }
    int vt=-1;
    int mn=INT_MAX;
    for (int i=0;i<n;i++) {
        if (a[i]==x) {
            cout<<i;
            return 0;
        }
        else if (abs(a[i]-x)<=y) {
            if (mn>abs(a[i]-x)) {
                mn=abs(a[i]-x);
                vt=i;
            }
        }
        else continue;
    }
    cout<<vt;
}