
#include <bits/stdc++.h>
using namespace std;

int main () {
    int n,x,left,right,mid,vtd=-1,vtc=-1;
    cin>>n>>x;
    int a[n];
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    left=0;
    right=n-1;
    while (left<=right) {
        mid=(left+right)/2;
        if (a[mid]==x) {
            vtd=mid;
            right=mid-1;
        }
        else if (a[mid]<=x) {
            left=mid+1;
        }
        else {
            right=mid-1;
        }
    }
    if (vtd==-1) {
        cout<<vtd;
        return 0;
    }
    left=0;
    right=n-1;
    while (left<=right) {
        mid=(left+right)/2;
        if (a[mid]==x) {
            vtc=mid;
            left=mid+1;
        }
        else if (a[mid]<=x) {
            left=mid+1;
        }
        else {
            right=mid-1;
        }
    }
    for (int i=vtd;i<=vtc;i++) {
        cout<<i<<" ";
    }

}