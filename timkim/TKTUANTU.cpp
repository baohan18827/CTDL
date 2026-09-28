// #include <bits/stdc++.h>
// using namespace std;

// int main () {
//     int n, x;
//     vector<int>a;
//     cin>>n>>x;
//     for (int i=0;i<n;i++) {
//         int s;
//         cin>>s;
//         a.push_back(s);
//     }
//     int vt=-1;
//     for (int i=0;i<n;i++) {
//         if (a[i]==x) {
//             cout<<i;
//             return 0;
//         }
//     }
//     cout<<vt;
// }

#include <bits/stdc++.h>
using namespace std;
int linearSearch (int a[], int n, int x) {
    int i;
    for(i=0;(i<n&&a[i]!=x);i++);
    if (i<n)
        return i;
    return -1;
}

//lính canh
int linearSearch (int a[], int n, int x) {
    int i;
    a[n]=x;
    for(i=0;(a[i]!=x);i++);
    if (i<n)
        return i;
    return -1;
}