#include "function.h"

void showMenu() {
    cout<<"************************"<<endl;
    cout<<"***** 1.添加联系人 *****\n***** 2.显示联系人 *****\n***** 3.查找联系人 *****\n***** 4.删除联系人 *****\n"
          "***** 5.修改联系人 *****\n***** 6.清空联系人 *****\n***** 0.退出通讯录 *****"<<endl;
    cout<<"************************"<<endl;
}

void addPerson(AdressBook * abs) {
    //判断通讯录是否已满
    if (abs->Size == MAX) {
        cout<<"通讯录已满，请先删除一部分"<<endl;
        return;
    }
    //添加具体联系人号码
    string phoneNumber;
    cout<<"请输入电话号"<<endl;
    cin>>phoneNumber;
    abs->personArray[abs->Size].PhoneNumber = phoneNumber;
    //性名
    string name ;
    cout<<"请输入姓名"<<endl;
    cin>>name;
    abs->personArray[abs->Size].Name = name;
    //性别
    int sex = 0;
    int flag = 1;
    while (flag) {
        cout<<"请输入性别,男生为1,女生为0"<<endl;
        cin>>sex;
        if (sex == 1 || sex == 0) {
            abs->personArray[abs->Size].Sex = sex;
            flag = 0;
        }
        else {
            continue;
        }
    }

    //生日
    string birthday;
    cout<<"请输入生日,若不知晓，请输入0"<<endl;
    cin>>birthday;
    if (birthday != "0") {
        abs->personArray[abs->Size].Birthday = birthday;
    }
    else {
        abs->personArray[abs->Size].Birthday = "无";
    }
    //住址
    string adress;
    cout<<"请输入住址,若不知晓，请输入0"<<endl;
    cin>>adress;
    if (adress != "0") {
        abs->personArray[abs->Size].Adress = adress;
    }
    else {
        abs->personArray[abs->Size].Adress = "无";
    }
    abs->Size ++;
}

void showPerson(AdressBook * abs) {
    if (abs->Size == 0) {
        cout<<"当前通讯录为空";
    }
    for (int i=0; i<abs->Size; i++) {
        cout<<"姓名："<<abs->personArray[i].Name<<"\t";
        cout<<"电话号："<<abs->personArray[i].PhoneNumber<<"\t";
        cout<<"地址："<<abs->personArray[i].Adress<<"\t";
        if (abs->personArray[i].Sex == 0) {
            cout<<"性别：女"<<"\t";
        }
        else {
            cout<<"性别：男"<<"\t";
        }
        cout<<"生日："<<abs->personArray[i].Birthday<<endl;
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
        cout<<"** 1.姓名   **"<<endl;
        cout<<"** 2.电话   **"<<endl;
        cout<<"*************"<<endl;
        cout<<"请选择查询方式对应序号"<<endl;
        cin>>select;
        switch (select) {
            case 1:
                cout<<"请输入姓名"<<endl;
                cin>>name;
                for (int i=0; i<abs->Size; i++) {
                    if (abs->personArray[i].Name == name) {
                        cout<<"姓名："<<abs->personArray[i].Name<<endl;
                        cout<<"电话号："<<abs->personArray[i].PhoneNumber<<endl;
                        cout<<"地址："<<abs->personArray[i].Adress<<endl;
                        if (abs->personArray[i].Sex == 0) {
                            cout<<"性别：女"<<endl;
                        }
                        else {
                            cout<<"性别：男"<<endl;
                        }
                        cout<<"生日："<<abs->personArray[i].Birthday<<endl;
                        flag1 = 1;
                        break;
                    }
                }
                if (flag1 == 1) {
                    cout<<"查无此人";
                }
                flag = 0;
                break;
            case 2:
                cout<<"请输入电话号"<<endl;
                cin>>phoneNumber;
                for (int i=0; i<abs->Size; i++) {
                    if (abs->personArray[i].PhoneNumber == phoneNumber) {
                        cout<<"姓名："<<abs->personArray[i].Name<<endl;
                        cout<<"电话号："<<abs->personArray[i].PhoneNumber<<endl;
                        cout<<"地址："<<abs->personArray[i].Adress<<endl;
                        if (abs->personArray[i].Sex == 0) {
                            cout<<"性别：女"<<endl;
                        }
                        else {
                            cout<<"性别：男"<<endl;
                        }
                        cout<<"生日："<<abs->personArray[i].Birthday<<endl;
                    }
                    else {
                        cout<<"查无此人"<<endl;
                    }
                }
                flag = 0;
                break;
            default:
                cout<<"请正确选择序号!"<<endl;
        }
    }
}

void dropPerson(AdressBook * abs) {
    string name;
    int flag = 0;
    cout<<"请输入要删除的人的姓名"<<endl;
    cin>>name;
    for (int i=0; i<abs->Size; i++) {
        if (abs->personArray[i].Name == name) {
            for (int j=abs->Size-1;j>i;j--) {
                abs->personArray[j-1] = abs->personArray[j];
            }
            abs->Size--;
            cout<<"删除成功"<<endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout<<"不存在该联系人"<<endl;
    }
}

void updatePerson(AdressBook * abs) {
    string name;
    int flag = 0;
    cout<<"请输入要修改的人的姓名"<<endl;
    cin>>name;
    for (int i=0; i<abs->Size; i++) {
        if (abs->personArray[i].Name == name) {
            for (int j=1;j<=5;j++) {
                int select;
                switch(j) {
                    case 1:
                        select = 0;
                        cout<<"是否修改姓名，是请输入1，否输入其他任意数字"<<endl;
                        cin>>select;
                        if (select == 1) {
                            cout<<"请输入新的姓名"<<endl;
                            cin>>abs->personArray[i].Name;
                        }
                        break;
                    case 2:
                        select = 0;
                        cout<<"是否修改电话号，是请输入1，否输入其他任意数字"<<endl;
                        cin>>select;
                        if (select == 1) {
                            cout<<"请输入新的电话号"<<endl;
                            cin>>abs->personArray[i].PhoneNumber;
                        }
                        break;
                    case 3:
                        select = 0;
                        cout<<"是否修改地址，是请输入1，否输入其他任意数字"<<endl;
                        cin>>select;
                        if (select == 1) {
                            cout<<"请输入新的地址"<<endl;
                            cin>>abs->personArray[i].Adress;
                        }
                        break;
                    case 4:
                        select = 0;
                        cout<<"是否修改性别，是请输入1，否输入其他任意数字"<<endl;
                        cin>>select;
                        if (select == 1) {
                            cout<<"请输入新的性别"<<endl;
                            cin>>abs->personArray[i].Sex;
                        }
                        break;
                    default:
                        select = 0;
                        cout<<"是否修改生日，是请输入1，否输入其他任意数字"<<endl;
                        cin>>select;
                        if (select == 1) {
                            cout<<"请输入新的生日"<<endl;
                            cin>>abs->personArray[i].Birthday;
                        }
                        break;
                }
            }

            cout<<"修改成功"<<endl;
            flag = 1;
            break;
        }
    }
    if (flag == 0) {
        cout<<"不存在该联系人"<<endl;
    }
}

void clsPerson(AdressBook * abs) {
    int confirm = 0;
    cout<<"确认清除通讯录？确认请输入1，否则输入0"<<endl;
    cin>>confirm;
    if (confirm) {
        abs->Size = 0;
    }
    cout<<"删除成功"<<endl;
}