#include <iostream>

using namespace std;

/* ����ڵ�ṹ�� */
struct ListNode {
    int val;         // �ڵ�ֵ
    ListNode *next;  // ָ����һ�ڵ��ָ��
    ListNode(int x) : val(x), next(nullptr) {}  // ���캯��
};

int main() {
    /* ��ʼ������ 1 -> 3 -> 2 -> 5 -> 4 */
// ��ʼ�������ڵ�
    ListNode* n0 = new ListNode(1);
    ListNode* n1 = new ListNode(3);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(5);
    ListNode* n4 = new ListNode(4);
// �����ڵ�֮�������
    n0->next = n1;
    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    cout<<n0->val<<endl;
    cout<<n1->val<<endl;
    cout<<n2->val<<endl;
    cout<<n3->val<<endl;
    cout<<n4->val<<endl;
    return 0;
}
