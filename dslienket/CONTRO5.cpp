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
        void PushBack(int x) {
            Node* newNode=new Node(x);
            if (head==NULL) {
                head=newNode;
                return;
            }
            Node* cur=head;
            while (cur->next) {
                cur=cur->next;
            }
            cur->next=newNode;
        }
        bool tong () {
            for (Node* a = head; a; a = a->next) {
                for (Node* b = head; b; b = b->next) {
                    if (b == a) continue;
                    for (Node* c = head; c; c = c->next) {
                        if (c == a || c == b) continue;
                        if (a->data == b->data + c->data) {
                            return true;
                        }
                    }
                }
            }
            return false;
        }
};
int main () {
    int n;
    cin>>n;
    LinkedList p;
    for (int i=0;i<n;i++) {
        int x;
        cin>>x;
        p.PushBack(x);
    }
    if (p.tong()) {
        cout<<"YES";
    }
    else cout<<"NO";
}