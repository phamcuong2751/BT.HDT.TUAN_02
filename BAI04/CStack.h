#pragma once
#include "CNode.h"
class CStack
{
private: 
	CNode* Head;
public:
	CStack();
	~CStack();
	
	void Enter();
	void PrintStack();

	CNode* CreateNode(int);
	bool IsFull();		//Kiểm tra Stack đầy
	bool IsEmpty();		//Kiểm tra Stack rỗng
	void Push(int);		//Thêm thần tử vào Stack
	void Pop();			//Xoá phần tử đầu của Stack
	int Top();			//Lấy phần tử ở đỉnh Stack
	int Size();			//Lấy số lượng phần tử của Stack
};

