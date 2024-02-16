#include "function.h"

void showMenu() {
    cout<<"************************"<<endl;
    cout<<"***** 1.�����ϵ�� *****\n***** 2.��ʾ��ϵ�� *****\n***** 3.������ϵ�� *****\n***** 4.ɾ����ϵ�� *****\n"
          "***** 5.�޸���ϵ�� *****\n***** 6.�����ϵ�� *****\n***** 0.�˳�ͨѶ¼ *****"<<endl;
    cout<<"************************"<<endl;
}

void addPerson(AdressBook * abs) {
    //�ж�ͨѶ¼�Ƿ�����
    if (abs->Size == MAX) {
        cout<<"ͨѶ¼����������ɾ��һ����"<<endl;
        return;
    }
    //��Ӿ�����ϵ�˺���
    string phoneNumber;
    cout<<"������绰��"<<endl;
    cin>>phoneNumber;
    abs->personArray[abs->Size].PhoneNumber = phoneNumber;
    //����
    string name ;
    cout<<"����������"<<endl;
    cin>>name;
    abs->personArray[abs->Size].Name = name;
    //�Ա�
    int sex = 0;
    int flag = 1;
    while (flag) {
        cout<<"�������Ա�,����Ϊ1,Ů��Ϊ0"<<endl;
        cin>>sex;
        if (sex == 1 || sex == 0) {
            abs->personArray[abs->Size].Sex = sex;
            flag = 0;
        }
        else {
            continue;
        }
    }

    //����
    string birthday;
    cout<<"����������,����֪����������0"<<endl;
    cin>>birthday;
    if (birthday != "0") {
        abs->personArray[abs->Size].Birthday = birthday;
    }
    else {
        abs->personArray[abs->Size].Birthday = "��";
    }
    //סַ
    string adress;
    cout<<"������סַ,����֪����������0"<<endl;
    cin>>adress;
    if (adress != "0") {
        abs->personArray[abs->Size].Adress = adress;
    }
    else {
        abs->personArray[abs->Size].Adress = "��";
    }
    abs->Size ++;
}

void showPerson(AdressBook * abs) {
    if (abs->Size == 0) {
        cout<<"��ǰͨѶ¼Ϊ��";
    }
    for (int i=0; i<abs->Size; i++) {
        cout<<"������"<<abs->personArray[i].Name<<"\t";
        cout<<"�绰�ţ�"<<abs->personArray[i].PhoneNumber<<"\t";
        cout<<"��ַ��"<<abs->personArray[i].Adress<<"\t";
        if (abs->personArray[i].Sex == 0) {
            cout<<"�Ա�Ů"<<"\t";
        }
        else {
            cout<<"�Ա���"<<"\t";
        }
        cout<<"���գ�"<<abs->personArray[i].Birthday<<endl;
    }
}

void searchPerson(AdressBook * abs) {
    int flag = 1;
    while (flag) {
        int select;
        int flag1 = 0;
        string name;
        string phoneNumber;
        cout<<"*************"<<endl;
        cout<<"** 1.����   **"<<endl;
        cout<<"** 2.�绰   **"<<endl;
        cout<<"*************"<<endl;
        cout<<"��ѡ���ѯ��ʽ��Ӧ���"<<endl;
        cin>>select;
        switch (select) {
            case 1:
                cout<<"����������"<<endl;
                cin>>name;
                for (int i=0; i<abs->Size; i++) {
                    if (abs->personArray[i].Name == name) {
                        cout<<"������"<<abs->personArray[i].Name<<endl;
                        cout<<"�绰�ţ�"<<abs->personArray[i].PhoneNumber<<endl;
                        cout<<"��ַ��"<<abs->personArray[i].Adress<<endl;
                        if (abs->personArray[i].Sex == 0) {
                            cout<<"�Ա�Ů"<<endl;
                        }
                        else {
                            cout<<"�Ա���"<<endl;
                        }
                        cout<<"���գ�"<<abs->personArray[i].Birthday<<endl;
                        flag1 = 1;
                        break;
                    }
                }
                if (flag1 == 1) {
                    cout<<"���޴���";
                }
                flag = 0;
                break;
            case 2:
                cout<<"������绰��"<<endl;
                cin>>phoneNumber;
                for (int i=0; i<abs->Size; i++) {
                    if (abs->personArray[i].PhoneNumber == phoneNumber) {
                        cout<<"������"<<abs->personArray[i].Name<<endl;
                        cout<<"�绰�ţ�"<<abs->personArray[i].PhoneNumber<<endl;
                        cout<<"��ַ��"<<abs->personArray[i].Adress<<endl;
                        if (abs->personArray[i].Sex == 0) {
                            cout<<"�Ա�Ů"<<endl;
                        }
                        else {
                            cout<<"�Ա���"<<endl;
                        }
                        cout<<"���գ�"<<abs->personArray[i].Birthday<<endl;
                    }
                    else {
                        cout<<"���޴���"<<endl;
                    }
                }
                flag = 0;
                break;
            default:
                cout<<"����ȷѡ�����!"<<endl;
        }
    }
}

void dropPerson(AdressBook * abs) {
    string name;
    int flag = 0;
    cout<<"������Ҫɾ�����˵�����"<<endl;
    cin>>name;
    for (int i=0; i<abs->Size; i++) {
        if (abs->personArray[i].Name == name) {
            for (int j=abs->Size-1;j>i;j--) {
                abs->personArray[j-1] = abs->personArray[j];
            }
            abs->Size--;
            cout<<"ɾ���ɹ�"<<endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout<<"�����ڸ���ϵ��"<<endl;
    }
}

void updatePerson(AdressBook * abs) {
    string name;
    int flag = 0;
    cout<<"������Ҫ�޸ĵ��˵�����"<<endl;
    cin>>name;
    for (int i=0; i<abs->Size; i++) {
        if (abs->personArray[i].Name == name) {
            for (int j=1;j<=5;j++) {
                int select;
                switch(j) {
                    case 1:
                        select = 0;
                        cout<<"�Ƿ��޸���������������1��������������������"<<endl;
                        cin>>select;
                        if (select == 1) {
                            cout<<"�������µ�����"<<endl;
                            cin>>abs->personArray[i].Name;
                        }
                        break;
                    case 2:
                        select = 0;
                        cout<<"�Ƿ��޸ĵ绰�ţ���������1��������������������"<<endl;
                        cin>>select;
                        if (select == 1) {
                            cout<<"�������µĵ绰��"<<endl;
                            cin>>abs->personArray[i].PhoneNumber;
                        }
                        break;
                    case 3:
                        select = 0;
                        cout<<"�Ƿ��޸ĵ�ַ����������1��������������������"<<endl;
                        cin>>select;
                        if (select == 1) {
                            cout<<"�������µĵ�ַ"<<endl;
                            cin>>abs->personArray[i].Adress;
                        }
                        break;
                    case 4:
                        select = 0;
                        cout<<"�Ƿ��޸��Ա���������1��������������������"<<endl;
                        cin>>select;
                        if (select == 1) {
                            cout<<"�������µ��Ա�"<<endl;
                            cin>>abs->personArray[i].Sex;
                        }
                        break;
                    default:
                        select = 0;
                        cout<<"�Ƿ��޸����գ���������1��������������������"<<endl;
                        cin>>select;
                        if (select == 1) {
                            cout<<"�������µ�����"<<endl;
                            cin>>abs->personArray[i].Birthday;
                        }
                        break;
                }
            }

            cout<<"�޸ĳɹ�"<<endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout<<"�����ڸ���ϵ��"<<endl;
    }
}

void clsPerson(AdressBook * abs) {
    int confirm = 0;
    cout<<"ȷ�����ͨѶ¼��ȷ��������1����������0"<<endl;
    cin>>confirm;
    if (confirm) {
        abs->Size = 0;
    }
    cout<<"ɾ���ɹ�"<<endl;
}