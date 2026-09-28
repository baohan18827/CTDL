#include <bits/stdc++.h>
using namespace std;

void SelectionSort (vector<int>&a) {
    int min;
    for (int i=0;i<a.size();i++) {
        min=i;
        for (int j=i+1;j<a.size();j++) {
            if (a[min]>a[j]) {
                min=j;
            }
        }
        swap(a[min],a[i]);
    }
}

int main () {
    vector<int>a;
    int x;
    while (cin>>x) {
        a.push_back(x);
    }
    SelectionSort (a);
    for (int i=0;i<a.size();i++) {
        cout<<a[i]<<' ';
    }
}