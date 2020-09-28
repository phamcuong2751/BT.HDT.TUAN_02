#include "CStack.h"

CStack::CStack() {
	Head = NULL;
}
CStack::~CStack() {
	CNode* p = new CNode;
	while (Head) {
		p = Head;
		delete Head;
		Head = p->pNext;
	};
	delete p;
}

CNode* CStack::CreateNode(int data) {
	CNode* p = new CNode;
	if (p != NULL)
	{
		p->data = data;
		p->pNext = NULL;
	}
	else
	{
		cout << "\nKhong du bo nho!" << endl;
		return NULL;
	}
	return p;
}

bool CStack::IsEmpty() {
	if (Head != NULL)
		return false;
	return true;
}

bool CStack::IsFull() {
	if (Head == NULL)
		return false;
	return true;
}

void CStack::Push(int data){
	CNode* p = CreateNode(data);

	if (this->IsEmpty() == true)
	{
		Head = p;
	}
	else
	{
		p->pNext = Head;
		Head = p;
	}
}


void CStack::Pop() {
	CNode* p = Head;
	Head = Head->pNext;
	delete p;
}

int CStack::Top() {
	return Head->data;
}

int CStack::Size() {
	CNode* p;
	int countElement = 0;

	for (p = Head; p != NULL; p = p->pNext)
	{
		countElement++;
	}

	return countElement;
}


void CStack::Enter() {
	int SoLuongPTu;
	cout << "Nhap so luong phan tu nguyen them vào Stack: ";
	cin >> SoLuongPTu;

	for (int i = 0; i < SoLuongPTu; i++)
	{
		int input;
		cout << "Nhap phan tu thu: " << i << ": ";
		cin >> input;
		this->Push(input);
	}
}


void CStack::PrintStack() {
	cout << "Stack: ";
	CNode* p;
	for (p = Head; p != NULL; p = p->pNext) {
		cout << p->data << " ";
	}
}