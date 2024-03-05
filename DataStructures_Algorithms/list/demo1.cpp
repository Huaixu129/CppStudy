#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    /* ��ʼ���б� */
// ��ע�⣬C++ �� vector ���Ǳ��������� nums
// �޳�ʼֵ
    //vector<int> nums1;
// �г�ʼֵ
    vector<int> nums = { 1, 3, 2, 5, 4 };

    cout<<nums[1]<<endl;

    /* ����б� */
    nums.clear();

/* ��β�����Ԫ�� */
    nums.push_back(1);
    nums.push_back(3);
    nums.push_back(2);
    nums.push_back(5);
    nums.push_back(4);

/* ���м����Ԫ�� */
    nums.insert(nums.begin() + 3, 6);  // ������ 3 ���������� 6

/* ɾ��Ԫ�� */
    nums.erase(nums.begin() + 3);      // ɾ������ 3 ����Ԫ��

    /* ͨ�����������б� */
    int count = 0;
    for (int num : nums) {
        count += num;
    }

/* ֱ�ӱ����б�Ԫ�� */
    count = 0;
    for (int num : nums) {
        count += num;
    }

    /* ƴ�������б� */
    vector<int> nums1 = { 6, 8, 7, 10, 9 };
// ���б� nums1 ƴ�ӵ� nums ֮��
    nums.insert(nums.end(), nums1.begin(), nums1.end());

    /* �����б� */
    sort(nums.begin(), nums.end());  // ������б�Ԫ�ش�С��������

    return 0;
}