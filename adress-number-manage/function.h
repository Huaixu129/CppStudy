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
    //ѧϰ�������Ըĳ�����
    struct Person personArray[MAX]; //��ϵ��
    int Size;  //ͨѶ¼Ŀǰ����
};

void showMenu() ;

void addPerson(AdressBook * abs) ;

void showPerson(AdressBook * abs) ;

void searchPerson(AdressBook * abs) ;

void dropPerson(AdressBook * abs) ;

void updatePerson(AdressBook * abs) ;

void clsPerson(AdressBook * abs) ;