#include <bits/stdc++.h>
using namespace std;

bool nt (int x) {
    if (x<2) return false;
    else {
        for (int i=2;i*i<=x;i++) {
            if (x%i==0) return  false;
        }
    }
    return true;
}

void SelectionSort (int a[],int n) {
    for (int i=0;i<n;i++) {
        if (nt(a[i])){
            int mn=i;
            for (int j=i+1;j<n;j++) {
                if (a[mn]<a[j]&&nt(a[j])) {
                    mn=j;
                }
            }
            swap(a[mn],a[i]);
        }       
    }
}
int main () {
    int n;
    int a[100];
    cin>>n;
    for (int i=0;i<n;i++) {
        cin>>a[i];
    }
    SelectionSort(a,n);
    for (int i=0;i<n;i++) {
        cout<<a[i]<<' ';
    }
}