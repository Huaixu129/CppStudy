#include <iostream>

using namespace std;
//创建链表
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

//插入节点
void insert(ListNode* n0, ListNode* p) {
    ListNode* n1 = n0->next;
    n0->next = p;
    p->next = n1;
}
//删除节点
void drop(ListNode* n0) {
    if(n0->next == nullptr) {
        return;
    }
    n0->next = n0->next->next;
}
//访问节点,起点的index依旧是0
ListNode* access(ListNode* head, int index) {
    for (int i = 0; i < index; i++) {
        if (head == nullptr)
            return nullptr;
        head = head -> next;
    }
    return head;
}
//查找节点
int find(ListNode* head, int val) {
    int index = 0;
    while(head != nullptr) {
        if (head->val == val) {
            return index;
        }
        head = head->next;
        index++;
    }
    return -1;
};

int main() {
    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);
    ListNode* n4 = new ListNode(4);
    ListNode* n5 = new ListNode(5);
    ListNode* n6 = new ListNode(6);
    ListNode* n7 = new ListNode(7);
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = n6;
    insert(n2,n7);
    cout<<n2->next->val<<endl;
    cout<<"------------------"<<endl;

    for (int i = 0; i < 7; i++) {
        cout<<access(n1,i)->val<<endl;
    }
    cout<<"------------------"<<endl;
    cout<<find(n1,6)<<endl;
    return 0;
}