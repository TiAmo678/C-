#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include "Node.h"
#include "Class.h"
using namespace std;
int main() {
	int i, a = 1;
	while (a>0) {
		menu();
		cout << "��ѡ����:";
		cin >> i;
		switch (i)
		{
		case 1:
			Inputpeople();
			break;
		case 2:
		{
			Node* p = FindIDpeople();
			if (p != NULL) {
				cout << "�ɹ��ҵ�����Ա" << endl;
				cout << "ID\t���ֲ���Ա\t����\t�Ա�\tְ��\t����ʱ��" << endl;
				cout << p->peo.id << "\t" << p->peo.people << "\t" << p->peo.name <<  "\t" << p->peo.sex
					<< "\t" << p->peo.staff << "\t" << p->peo.time << endl;
				system("pause");
				system("cls");
			}
			break;
		}
		case 3: {
			Node* p = FindNAMEpeople();
			if (p != NULL) {
				cout << "�ɹ��ҵ�����Ա" << endl;
				cout << "ID\t���ֲ���Ա\t����\t�Ա�\tְ��\t����ʱ��" << endl;
				cout << p->peo.id << "\t" << p->peo.people << "\t" << p->peo.name <<  "\t" << p->peo.sex
					<< "\t" << p->peo.staff << "\t" << p->peo.time << endl;
				system("pause");
				system("cls");
			}
			break;
		}
		case 4:
			Printpeople();
			break;
		case 5:
			Modifypeople();
			break;
		case 6:
			Deletepeople();
			break;
		case 7: {
			int t = Countpeople();
			cout <<"ϵͳ����Ա����"<< t << endl;
			system("pause");
			system("cls");
			break;
		}
		case 8:
			Savepeople();
			break;
		case 9:
			Readpeople();
			break;
		default:
			cout << "�˳�ϵͳ��\n";
			a = -1; //����ѭ��
			break;
		}
	}

	return 0;
}


void menu() {
	Printdata st;
	st.Print("�������ֲ�", "����ϵͳ");
	st.Print("������");
	A* a = new (B); //�����ʼ������
	a->show(); //�麯��ʹ�ã�Ӧ��B��show()����
	print<string>("****��ӭ�����������ֲ�����ϵͳ****"); //����ģ��
	C c("************��ѡ�����б�**********");
	//C c; //Ĭ�ϲ���
	print(c);
	cout << "*************1.��ӹ���*************\n";
	cout << "***********2.��ѯ����(ID)***********\n";
	cout << "**********3.��ѯ����(NAME)**********\n";
	cout << "*************4.��ʾ����*************\n";
	cout << "*************5.�༭����*************\n";
	cout << "*************6.ɾ������*************\n";
	cout << "*************7.ͳ�ƹ���*************\n";
	cout << "*************8.���湦��*************\n";
	cout << "*************9.��ȡ����*************\n";
	cout << "*************0.�˳�ϵͳ*************\n";
	return;
}

void Inputpeople() {
	char ID[25];
	cout << "��������Աid" << endl;
	cin >> ID;
	Node* p = g_pHead;
	while (p != NULL) {
		if (strcmp(p->peo.id, ID) == 0) {
			cout << "��Ա�Ѵ��ڣ�ȡ�����";
			system("pause");
			system("cls");
			return;
		}
		p = p->pNext;
	}9++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
	Node* pNewNode = (Node*)malloc(sizeof(Node)); //�����½ڵ�
	pNewNode->pNext = NULL;
	//ͷ����
	if (g_pHead == NULL) { //ͷ�ڵ�Ϊ��
		g_pHead = pNewNode;
	}
	else {
		pNewNode->pNext = g_pHead; //�����½ڵ�
		g_pHead = pNewNode; //����ͷ�ڵ�
	}
	strcpy(pNewNode->peo.id, ID);
	cout << "������Ա�����Ա" << endl;
	cin >> pNewNode->peo.people;
	cout << "��������Ա����" << endl;
	cin >> pNewNode->peo.name;
	cout << "��������Ա�Ա�" << endl;
	cin >> pNewNode->peo.sex;
	cout << "��������Աְ��" << endl;
	cin >> pNewNode->peo.staff;
	cout << "�����뽡��ʱ��" << endl;
	cin >> pNewNode->peo.time;

	cout << "��Ϣ¼��ɹ�" << endl;
	system("pause");
	system("cls");
}

Node* FindIDpeople() {
	cout << "�����������Աid��Ϣ" << endl;
	char ID[20];
	cin >> ID;
	Node* p = g_pHead;
	while (p != NULL) {
		if (strcmp(p->peo.id ,ID) == 0) {
			return p;
		}
		p = p->pNext;
	}
	if (p == NULL) {
		cout << "�Ҳ�������Ա";
	}
	system("pause");
	system("cls");
}

Node* FindNAMEpeople() {
	cout << "�����������Աname��Ϣ" << endl;
	char NAME[20];
	cin >> NAME;
	Node* p = g_pHead;
	while (p != NULL) {
		if (strcmp(p->peo.name, NAME) == 0) {
			return p;
		}
		p = p->pNext;
	}
	if (p == NULL) {
		cout << "�Ҳ�������Ա";
	}
	system("pause");
	system("cls");
}
void Printpeople() {
	Node* p = g_pHead;
	cout << "ID\t���ֲ���Ա\t����\t�Ա�\tְ��\t����ʱ��" << endl;
	while (p != NULL) {
		//cout << "ID\t���ֲ���Ա\t����\t�Ա�\tְ��\t����ʱ��" << endl;
		cout << p->peo.id << "\t" << p->peo.people << "\t\t" << p->peo.name << "\t" << p->peo.sex
			<< "\t" << p->peo.staff << "\t" << p->peo.time<<endl;
		p = p->pNext;
	}
	system("pause");
	system("cls");
}

void Modifypeople() {
	char ID[25], ID2[25];
	cout << "�����������Աid��Ϣ��" << endl;
	cin >> ID;
	cout << "�������޸ĺ���Աid��Ϣ��" << endl;
	cin >> ID2;
	Node* p = g_pHead;
	while (p != NULL) {
		if (strcmp(p->peo.id, ID2) == 0) {
			cout << "�޸ĺ�id�Ѵ��ڣ��޸�ʧ��" << endl;
			system("pause");
			system("cls");
			return;
		}
		p = p->pNext;
	}
	Node* p1 = g_pHead;
	while (p1 != NULL) {
		if (strcmp(p1->peo.id ,ID) == 0) { 
			cout << "�������޸ĺ���Ա��Ϣ\t���ֲ���Ա\t����\t�Ա�\tְ��\t����ʱ��" << endl;
			strcpy(p1->peo.id, ID2);
			cin >> p1->peo.people >> p1->peo.name >> p1->peo.sex >> p1->peo.staff >> p1->peo.time ;
			cout << endl << "�޸ĳɹ�" << endl;
			system("pause");
			system("cls");
			return;

		}
		p1 = p1->pNext;

	}
	if (p1 == NULL) {
		cout << "û���ҵ�����Ա��Ϣ"<<endl;
		system("pause");
		system("cls");
	}
}

void Deletepeople() {
	cout << "������ɾ����Աid��Ϣ" << endl;
	char ID[25];
	cin >> ID;
	Node* p1 = NULL;
	if (strcmp(g_pHead->peo.id, ID) == 0) {  //ɾ��ͷ�ڵ�
		p1 = g_pHead;
		g_pHead = g_pHead->pNext;
		free(p1);
		cout << "ɾ���ɹ�" << endl;
		system("pause");
		system("cls");
		return;
	}
	Node* p = g_pHead;
	Node* p2 = NULL;
	while (p->pNext != NULL) { //ɾ���м�ڵ�
		if (strcmp(p->pNext->peo.id, ID) == 0) {
			p2 = p->pNext;
			p->pNext = p2->pNext;
			free(p2);
			cout << "ɾ���ɹ�" << endl;
			system("pause");
			system("cls");
			return;
		}
		p = p->pNext;
		if (p->pNext == NULL) {
			break;
		}
	}
	if (p->pNext == NULL) {
		cout << "��¼Ϊ�գ�" << endl;
	}
	system("pause");
	system("cls");
}

int Countpeople() { 
	int cnt = 0;
	Node* p = g_pHead;
	while (p != NULL) {
		cnt++;
		p = p->pNext;
	}
	return cnt;
}

void Savepeople() {
	ofstream ofs;
	ofs.open("people.txt", ios::out || ios::binary); //������д��
	Node* p = g_pHead;
	while (p != NULL) {
		ofs.write((const char*)&p->peo, sizeof(person));
		p = p->pNext;
	}
	ofs.close(); //�ر��ļ�
	cout << "����ɹ�"<<endl;
	system("pause");
	system("cls");
}

void Readpeople() {
	FILE* fp = fopen("people.txt", "r");
	if (fp == NULL) {
		cout << "�ļ���ʧ��";
	}
	person per;
	while (fread(&per, 1, sizeof(person), fp)) {
		Node* pNewNode = (Node*)malloc(sizeof(Node));
		pNewNode->pNext = NULL;
		memcpy(pNewNode, &per, sizeof(person));
		if (g_pHead == NULL) { //ͷ�ڵ�Ϊ��
			g_pHead = pNewNode;
		}
		else {
			pNewNode->pNext = g_pHead; //�����½ڵ�
			g_pHead = pNewNode; //����ͷ�ڵ�
		}
	}
	cout << "��ȡ�ɹ�" << endl;
	system("pause");
	system("cls");
}

void print(C c) { //��Ϊ��Ԫ����������C�е�
	cout << c.s << endl;
}








