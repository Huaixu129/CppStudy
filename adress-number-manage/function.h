#include <iostream>
#include <string>
#include <cstdio>

#define MAX 1000

using namespace std;

struct Person {
    string Name;
    string PhoneNumber;
    string Birthday;
    string Adress;
    int    Sex;
};

struct AdressBook {
    //学习链表后可以改成链表
    struct Person personArray[MAX]; //联系人
    int Size;  //通讯录目前人数
};

void showMenu() ;

void addPerson(AdressBook * abs) ;

void showPerson(AdressBook * abs) ;

void searchPerson(AdressBook * abs) ;

void dropPerson(AdressBook * abs) ;

void updatePerson(AdressBook * abs) ;

void clsPerson(AdressBook * abs) ;