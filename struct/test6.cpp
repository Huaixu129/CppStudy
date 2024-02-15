#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

struct student{
    string name;
    int score;
};

struct teacher {
    string name;
    student sArray[5];
};

void allocateSpace(teacher tArray[] , int len)
{
    string tName = "��ʦ";
    string sName = "ѧ��";
    string nameSeed = "ABCDE";
    for (int i = 0; i < len; i++)
    {
        tArray[i].name = tName + nameSeed[i];

        for (int j = 0; j < 5; j++)
        {
            tArray[i].sArray[j].name = sName + nameSeed[j];
            tArray[i].sArray[j].score = rand() % 61 + 40;
        }
    }
}

void printTeachers(teacher tArray[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << tArray[i].name << endl;
        for (int j = 0; j < 5; j++)
        {
            cout << "\t������" << tArray[i].sArray[j].name << " ������" << tArray[i].sArray[j].score << endl;
        }
    }
}

int main() {
    srand((unsigned int)time(nullptr)); //��������� ͷ�ļ� #include <ctime>

    teacher tArray[3]; //��ʦ����

    int len = sizeof(tArray) / sizeof(teacher);

    allocateSpace(tArray, len); //��������

    printTeachers(tArray, len); //��ӡ����

    system("pause");

    return 0;
}