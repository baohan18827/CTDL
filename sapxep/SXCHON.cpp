#include <bits/stdc++.h>
using namespace std;

    void swap (int &a, int &b) {
        int temp=a;
        a=b;
        b=temp;
    }
void QuickSort (vector<int> &a, int l, int r) {
    int i=l;
    int j=r;
    int x=a[(l+r)/2];
    do {
        while (a[i]<x) i++;
        while (a[j]>x) j--;
        if (i<=j) {
            swap(a[i],a[j]);
            i++;
            j--;
        }
    } while (i<=j);
    if (l<j) QuickSort (a,l,j);
    if (i<r) QuickSort (a,i,r);
} 

int main () {
    vector<int>a;
    int x;
    while (cin>>x) {
        a.push_back(x);
    }
    QuickSort(a,0,a.size()-1);
    for (int i=0;i<a.size();i++) {
        cout<<a[i]<<' ';
    }
}

SelectionSort (chọn 1 ptu nhỏ nhất/lớn nhất r đổi về đầu/cuối)

template <class DataType>
void selectionSort (DataType a[], int n) {
    int min;
    for (int i=0;i<n-1;i++) {
        min=i;
        for (int j=i+1;j<n;j++) {
            if (a[j]<a[min]) {
                min=j;
            }
        }
            if (min!=i) {
                swap(a[min], a[i]);
            }
        
    }
}

Insertion Sort (chèn vị trí thích hợp) {}
template <class DataType>
void insertionSort (DataType a[], int n) {
    int pos,i;
    DataType x;
    for (int i-1;i<n;i++) {
        x=a[i];
        for (pos=i;(pos>0)&&a[pos-1]>x);pos--) {
            a[pos]=a[pos-1];
        }
        a[pos]=x;
    }
}

Binary Insertion sort (chèn nhị phân)
template <class DataType>
void doBinaryInsertionSort (DataType a[], int n) {
   
    }
}

cách trình bày:

    5 2 6 8 1 3 7 4 (hỏi minh họa kết quả dãy số theo từng bước vòng lặp của select, có 8 số thì lặp 7 vòng, ghi 7 bước)
b1  2 5 ............
    2 5 6..........
    2 5 6 8.........
    1 2 5 6 8....
  
    

8 2 6 5 1 3 7 4
8 7 6 5 1 3 2 4
8 7 6 5 1 3 2 4
8 7 6 5 1 3 2 4
8 7 6 5 4 3 2 1
8 7 6 5 4 3 2 1
8 7 6 5 4 3 2 1

5 2 6 8 1 3 7 4
6 5 2 8 1 3 7 4
8 6 5 2 1 3 7 4
8 6 5 2 1 3 7 4
8 6 5 3 2 1 7 4
8 7 6 5 3 2 1 4
8 7 6 5 4 3 2 1

37 83 45 5 26 23 36 99 84




b2
b3
b4
b5
b6
b7
    b1: 1 2 6 8....... 
b2: 1 2 6 8...
b3: 1 2 3 8 5...
b4: 1 2 3 4 5 6 7 8
b5: 1 2 3 4 5 6 7 8
b6: 1 2 3 4 5 6 7 8 
b7: 1 2 3 4 5 6 7 8

(của insert) 
b1: 2 5 6 8.........
b2: 2 5 6 8........
b3: 2 5 6 8.........
b4: 1 2 5 6 8 3 7 4
b5: 1 2 3 5 6 8 7 4
b6: 1 2 3 5 6 7 8 4
b7: 1 2 3 4 5 6 7 8




Interchange Sort (xét các nghịch thế chứa phần tử rồi đổi chỗ) 
template <class DataType>
void ỉnterchangSort (DataType a[], int n) {
    int i,j;
    for (i=0;i<n-1;i++) {
        for (j=i+1;j<n;j++) {
            if (a[j]<a[i]) {
                swap(a[i],a[j]);
            }
        }
    }
}

Bubble sort  (xphat cuối (đầu) dãy, đổi chỗ các cặp ptu kế cận để đưa ptu nhỏ (lớn) hơn trong cặp ptu đó về vị trí đúng đầu(cuối))
