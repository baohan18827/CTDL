#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(NULL){};
};
class LinkedList {
    private:
        Node* head;
    public:
        LinkedList(): head(NULL) {};
        void PushBack (int x) {
            Node* newNode = new Node(x);
            if (head==NULL) {
                head=newNode;
                return;
            }
            Node* cur=head;
            while (cur->next!=NULL) {
                cur=cur->next;
            }
            cur->next=newNode;
        }
        void minmax () {
            int maxx=INT_MIN;
            int minn=INT_MAX;
            Node* cur=head;
            while (cur) {
                if (cur->data>maxx) {
                    maxx=cur->data;
                }
                if (cur->data<minn) {
                    minn=cur->data;
                }
                cur=cur->next;
            }
            cout<<maxx<<endl;
            int i=1;
            cur=head;
            while (cur) {
                if (cur->data==maxx) {
                    cout<<i<<" ";
                }
                cur=cur->next;
                i++;
            } 
            cout<<endl<<minn<<endl;
             i=1;
            cur=head;
            while (cur) {
                if (cur->data==minn) {
                    cout<<i<<" ";
                }
                cur=cur->next;
                i++;
            } 
        }
};
int main () {
    int n;
    LinkedList p;
    cin>>n;
    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        p.PushBack(x);
    }
    p.minmax();
}