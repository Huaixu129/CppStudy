#include "function.h"

int main() {
    //����ͨѶ¼�ṹ�����
    AdressBook abs;
    //��ʼ��ͨѶ¼��Ա����
    abs.Size = 0;

    bool flag = true;
    while(flag) {
        system("cls");
        showMenu();
        int select = 0; //�����û�ѡ������ı���
        cout<<"���������ѡ��"<<endl;
        cin >>select;
        switch (select) {
            case 1:     // �����ϵ��
                addPerson(&abs);
                break;
            case 2:     // ��ʾ��ϵ��
                showPerson(&abs);
                break;
            case 3:     // ������ϵ��
                searchPerson(&abs);
                break;
            case 4:     // ɾ����ϵ��
                dropPerson(&abs);
                break;
            case 5:     // �޸���ϵ��
                updatePerson(&abs);
                break;
            case 6:     // �����ϵ��
                clsPerson(&abs);
                break;
            case 0:     // �˳�ͨѶ¼
                flag = false;
                cout<<"��ӭ�´�ʹ��"<<endl;
                break;
            default:
                cout<<"������������ȷ��ѡ��"<<endl;
        }
        system("pause");
        system("cls");
    }
    return 0;
}