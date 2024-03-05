#include <iostream>
using namespace std;

/* ˫������ڵ�ṹ�� */
struct ListNode {
    int val;         // �ڵ�ֵ
    ListNode *next;  // ָ���̽ڵ��ָ��
    ListNode *prev;  // ָ��ǰ���ڵ��ָ��
    ListNode(int x) : val(x), next(nullptr), prev(nullptr) {}  // ���캯��
};

//����ڵ�
void insert(ListNode* n0, ListNode* p) {
    ListNode* n1 = n0->next;
    n0->next = p;
    p->prev = n0;
    p->next = n1;
    n1->prev = p;
}

int main() {
    ListNode* n0 = new ListNode(0);
    ListNode* n1 = new ListNode(1);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(3);
    n0->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->prev = n2;
    n2->prev = n1;
    n1->prev = n0;
    return 0;
}