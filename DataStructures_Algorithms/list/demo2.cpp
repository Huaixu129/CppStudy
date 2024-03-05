#include <iostream>
#include <vector>
using namespace std;

int main() {
    /* �б��� */
    class MyList {
    private:
        int *arr;             // ���飨�洢�б�Ԫ�أ�
        int arrCapacity = 10; // �б�����
        int arrSize = 0;      // �б��ȣ���ǰԪ��������
        int extendRatio = 2;   // ÿ���б����ݵı���

    public:
        /* ���췽�� */
        MyList() {
            arr = new int[arrCapacity];
        }

        /* �������� */
        ~MyList() {
            delete[] arr;
        }

        /* ��ȡ�б��ȣ���ǰԪ��������*/
        int size() {
            return arrSize;
        }

        /* ��ȡ�б����� */
        int capacity() {
            return arrCapacity;
        }

        /* ����Ԫ�� */
        int get(int index) {
            // �������Խ�磬���׳��쳣����ͬ
            if (index < 0 || index >= size())
                throw out_of_range("����Խ��");
            return arr[index];
        }

        /* ����Ԫ�� */
        void set(int index, int num) {
            if (index < 0 || index >= size())
                throw out_of_range("����Խ��");
            arr[index] = num;
        }

        /* ��β�����Ԫ�� */
        void add(int num) {
            // Ԫ��������������ʱ���������ݻ���
            if (size() == capacity())
                extendCapacity();
            arr[size()] = num;
            // ����Ԫ������
            arrSize++;
        }

        /* ���м����Ԫ�� */
        void insert(int index, int num) {
            if (index < 0 || index >= size())
                throw out_of_range("����Խ��");
            // Ԫ��������������ʱ���������ݻ���
            if (size() == capacity())
                extendCapacity();
            // ������ index �Լ�֮���Ԫ�ض�����ƶ�һλ
            for (int j = size() - 1; j >= index; j--) {
                arr[j + 1] = arr[j];
            }
            arr[index] = num;
            // ����Ԫ������
            arrSize++;
        }

        /* ɾ��Ԫ�� */
        int remove(int index) {
            if (index < 0 || index >= size())
                throw out_of_range("����Խ��");
            int num = arr[index];
            // ������ index ֮���Ԫ�ض���ǰ�ƶ�һλ
            for (int j = index; j < size() - 1; j++) {
                arr[j] = arr[j + 1];
            }
            // ����Ԫ������
            arrSize--;
            // ���ر�ɾ����Ԫ��
            return num;
        }

        /* �б����� */
        void extendCapacity() {
            // �½�һ������Ϊԭ���� extendRatio ����������
            int newCapacity = capacity() * extendRatio;
            int *tmp = arr;
            arr = new int[newCapacity];
            // ��ԭ�����е�����Ԫ�ظ��Ƶ�������
            for (int i = 0; i < size(); i++) {
                arr[i] = tmp[i];
            }
            // �ͷ��ڴ�
            delete[] tmp;
            arrCapacity = newCapacity;
        }

        /* ���б�ת��Ϊ Vector ���ڴ�ӡ */
        vector<int> toVector() {
            // ��ת����Ч���ȷ�Χ�ڵ��б�Ԫ��
            vector<int> vec(size());
            for (int i = 0; i < size(); i++) {
                vec[i] = arr[i];
            }
            return vec;
        }
    };
    return 0;
}