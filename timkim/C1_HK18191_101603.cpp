#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,x;
    int a[100];
    cin>>n>>x;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    int vt=-1;
    for (int i=0;i<n;i++) {
        if (a[i]==x) {
            cout<<"Y"<<endl<<i;
            return 0;
        }
    }
        cout<<"N"<<endl;
        int mx=INT_MIN;
        for (int i=0;i<n;i++) {
            if (x>a[i]&&a[i]>=mx) {
                vt=i;
                mx=a[i];
            }
        }
        cout<<vt;

}