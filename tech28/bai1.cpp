#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[7]={5,5,1,2,3,4,5};
    set<int>se(a,a+7);
    auto it=se.find(7);
    --it;
    cout<<*it<<endl;
}