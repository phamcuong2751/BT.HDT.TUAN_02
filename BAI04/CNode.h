#pragma once
#include <iostream>
using namespace std;
class CNode
{
public:
	CNode();
	int data;
	CNode* pNext;
	~CNode();
};