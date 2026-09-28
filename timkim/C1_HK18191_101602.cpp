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
            vt=i;
        }
    }
    if (vt!=-1) cout<<"Y"<<endl<<vt;
    else  {
        cout<<"N"<<endl;
        for (int i=0;i<n;i++) {
            if (x<a[i]) {
                cout<<i;
                return 0;
            }
        }
        cout<<vt;
    }

}