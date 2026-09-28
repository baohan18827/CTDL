#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,k;
    vector<int>a;
    int m[1000];
    cin>>n>>k;
    for (int i=0;i<k;i++) {
        cin>>m[i];
    }
    for (int i=0;i<n;i++) {
        a.push_back(i);
    }

    int vt=0;
    int vtk=0;
    while (a.size()!=0) {
        vt=(vt+m[vtk]-1)%a.size();
        cout<<a[vt]<<" ";
        a.erase(a.begin()+vt);
        vtk=(vtk+1)%k;
    }
}