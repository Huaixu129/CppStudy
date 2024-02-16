#include "function.h"

int main() {
    //创建通讯录结构体变量
    AdressBook abs;
    //初始化通讯录人员个数
    abs.Size = 0;

    bool flag = true;
    while(flag) {
        system("cls");
        showMenu();
        int select = 0; //创建用户选择输入的变量
        cout<<"请输入你的选择"<<endl;
        cin >>select;
        switch (select) {
            case 1:     // 添加联系人
                addPerson(&abs);
                break;
            case 2:     // 显示联系人
                showPerson(&abs);
                break;
            case 3:     // 查找联系人
                searchPerson(&abs);
                break;
            case 4:     // 删除联系人
                dropPerson(&abs);
                break;
            case 5:     // 修改联系人
                updatePerson(&abs);
                break;
            case 6:     // 清空联系人
                clsPerson(&abs);
                break;
            case 0:     // 退出通讯录
                flag = false;
                cout<<"欢迎下次使用"<<endl;
                break;
            default:
                cout<<"请重新输入正确的选项"<<endl;
        }
        system("pause");
        system("cls");
    }
    return 0;
}