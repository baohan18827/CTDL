// #include <bits/stdc++.h>
// using namespace std;

// int main () {
//     int n,x,left,right,mid,vt=-1;
//     cin>>n>>x;
//     int a[n];
//     for (int i=0;i<n;i++) {
//         cin>>a[i];
//     }
//     left=0;
//     right=n-1;
//     while (left<=right) {
//         mid=(left+right)/2;
//         if (a[mid]==x) {
//             vt=mid;
//             right=mid-1;
//         }
//         else if (a[mid]<=x) {
//             left=mid+1;
//         }
//         else {
//             right=mid-1;
//         }
//     }
//     cout<<vt;
// }

int binarySearch (int a[], int n, int x) {
    int left=0,right=n-1,mid;
    while (left<=right) {
        mid=(left+right)/2;
        if (x==mid) {
            return mid;
        }
        else if (x>mid) {
            left=mid+1;
        }
        else {
            right=mid-1;
        }
    }
    return -1;

}