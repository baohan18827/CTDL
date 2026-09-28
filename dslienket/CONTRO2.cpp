#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node (int val) : data(val), next(NULL) {};
};
class LinkedList {
    private:
        Node* head;
    public:
    LinkedList(): head(NULL) {};
    void PushBack (int x) {
        Node* newNode= new Node (x);
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
    void erase (int k) {
        while (head&&head->data==k) {
            Node* temp=head;
            head=head->next;
            delete temp;
        }
        Node* cur=head;
        while (cur&&cur->next) {
            if (cur->next->data==k) {
                Node*temp=cur->next;
                cur->next=cur->next->next;
                delete temp;
            }
            else {
                cur=cur->next;
            }
        }
    }
    void Print () {
        Node* cur=head;
        int dem=0;
        while (cur) {
            dem++;
            cur=cur->next;
        }
        cout<<dem<<endl;
        cur=head;
        while (cur) {
            cout<<cur->data<<' ';
            cur=cur->next;
        }
    }
};
int main () {
    LinkedList p;
    int n,k,c;
    cin>>n>>k;
    for (int i=1;i<=n;i++) {
        cin>>c;
        p.PushBack(c);
    }
    p.erase(k);
    p.Print();
}
