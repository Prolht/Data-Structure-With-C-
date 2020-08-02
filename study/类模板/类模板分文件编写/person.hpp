// person.h
#pragma once
#include<iostream>

using namespace std;

#include<string>
// 类模板的分文件编写的问题以及解决

template<class T1, class T2>
class Person
{
    public:
        Person(T1 name, T2 age);
        void showPerson();
        T1 m_Name;
        T2 m_Age;
};


template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age)
{
    this->m_Name = name;
    this->m_Age = age;
}

template<class T1, class T2>
void Person<T1, T2>::showPerson()
{
    cout << "Name is: " << this->m_Name << endl;
    cout << "Age is: " << this->m_Age << endl;
}
