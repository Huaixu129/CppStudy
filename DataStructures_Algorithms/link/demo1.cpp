#include <iostream>

using namespace std;

/* 链表节点结构体 */
struct ListNode {
    int val;         // 节点值
    ListNode *next;  // 指向下一节点的指针
    ListNode(int x) : val(x), next(nullptr) {}  // 构造函数
};

int main() {
    /* 初始化链表 1 -> 3 -> 2 -> 5 -> 4 */
// 初始化各个节点
    ListNode* n0 = new ListNode(1);
    ListNode* n1 = new ListNode(3);
    ListNode* n2 = new ListNode(2);
    ListNode* n3 = new ListNode(5);
    ListNode* n4 = new ListNode(4);
// 构建节点之间的引用
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
