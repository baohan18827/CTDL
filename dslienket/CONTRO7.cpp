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
        LinkedList() : head(NULL) {};
        void PushBack (int val) {
            Node* newNode = new Node(val);
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
        void cap (ofstream &fout) {
            int kcmin = INT_MAX;
            for (Node *cur=head; cur; cur=cur->next) {
                for (Node *curr=cur->next; curr; curr=curr->next) {
                    kcmin = min(kcmin, abs(cur->data - curr->data));
                }
            }

            vector<pair<int,int>> kq;
            for (Node *cur=head; cur; cur=cur->next) {
                for (Node *curr=cur->next; curr; curr=curr->next) {
                    if (abs(cur->data - curr->data) == kcmin) {
                        kq.push_back({cur->data, curr->data}); 
                    }
                }
            }

            fout << kq.size() << " " << kcmin << "\n";
            for (size_t i = 0; i < kq.size(); i++) {
                int a = min(kq[i].first, kq[i].second);
                int b = max(kq[i].first, kq[i].second);
                fout << "(" << a << ", " << b << ") ";
            }
        }
};

int main () {
    LinkedList p;
    int n;
    ifstream fin ("CONTRO.inp");
    ofstream fout ("CONTRO.out");
    fin>>n;
    for (int i=0;i<n;i++) {
        int x;
        fin>>x;
        p.PushBack(x);
    }
    p.cap(fout);
    return 0;
}