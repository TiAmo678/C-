#pragma once //������
#include <iostream>
#include <string>
using namespace std;

//����
class Printdata {
public:
	void Print(string a, string b);
	void Print(string a);
};

//�̳����麯��
class A {
public:
	virtual void show(); //�麯��
private:
	string sa;
};

class B: virtual public A { //�����
public:
	void show();
private:
	string sb;
};

class C :virtual public A {  //��A��̳У������
public:
	C(string s1="ι����д������") { //Ĭ�ϲ���
		s = s1;
	}
	friend void print(C c); //��Ԫ����
private:
	string s;
};

class D :public B, public C { //���μ̳�
};