#include <iostream>
#include "Class.h"
#include <string>
using namespace std;

void Printdata::Print(string a, string b) { //����
	cout << a + b << endl;
}
void Printdata::Print(string a) { //Ĭ�ϲ���
	cout << a << endl;
}

void A::show() {
	cout << "����" << endl;
}
void B::show() {
	cout << "��ʼ����" << endl;
}


