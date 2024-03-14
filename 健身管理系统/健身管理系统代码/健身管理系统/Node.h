#pragma once  //�����뺯������
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;

typedef struct _person {
	char id[25]; //id
	char people[25]; //���ֲ���Ա
	char name[25];	//����
	char sex[25]; //�Ա�
	char staff[25];//ְ��
	char time[25]; //����ʱ�䣨Ա��Ϊ�㣬��ԱΪ��.�꿨��
}person;

typedef struct _Node {
	person peo;   //������
	struct _Node* pNext;  //ָ����
}Node;

Node * g_pHead = NULL; //ͷ���

void menu(); //�˵�
void Inputpeople(); //���빦��
Node* FindIDpeople(); //���ҹ���(ID)
Node* FindNAMEpeople();//���ҹ���(NAME)
void Printpeople(); //��ʾ����
void Modifypeople(); //�༭����
void Deletepeople(); //ɾ������
int Countpeople();   //ͳ�ƹ���
void Savepeople();   //���湦��
void Readpeople();   //��ȡ����
void Print(string a, string b);//��������
void Print(string a);

template<class T>//����ģ��
void print(T x) {
	cout << x << endl;
}