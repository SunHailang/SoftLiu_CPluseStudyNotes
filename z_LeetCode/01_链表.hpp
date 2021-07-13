#pragma once
#ifndef __01_链表__
#define __01_链表__



#include <stdlib.h>


typedef struct _NodeLink
{
	int value;
	struct _NodeLink* next;
}NodeLink;

// 创建一个链表 第一次元素为 value
NodeLink* CreatLink(int value)
{
	NodeLink* temp = (NodeLink*)malloc(sizeof(NodeLink));
	temp->value = value;
	temp->next = NULL;
	NodeLink* head = (NodeLink*)malloc(sizeof(NodeLink));
	head->next = temp;
	return head;
}
// 往链表的尾部插入一个 value 数据
void AddLink(NodeLink* head, int value)
{
	NodeLink* temp = head;
	while (temp->next != NULL) temp = temp->next;

	NodeLink* pNew = (NodeLink*)malloc(sizeof(NodeLink));
	pNew->value = value;
	pNew->next = NULL;
	temp->next = pNew;
}
// 链表的反转
NodeLink* LinkReverse(NodeLink* head)
{
	NodeLink* per = NULL;
	NodeLink* cur = head->next;
	while (cur != NULL)
	{
		NodeLink* temp = cur;
		cur = cur->next;
		temp->next = per;
		per = temp;
	}
	head->next = per;
	return head;
}

// 1 success , 0 failed
int LinkDelete(NodeLink* head, int value)
{
	NodeLink* temp = head;
	while (temp->next != NULL)
	{
		if (temp->next->value == value)
		{
			NodeLink* del = temp->next;
			temp->next = temp->next->next;
			free(del);
			return 1;
		}
		temp = temp->next;
	}
	return 0;
}
// 1:success,  0:failed
// 在 pos 后面 添加 value
int LinkInster(NodeLink* head, int pos, int value)
{
	NodeLink* temp = head->next;
	while (temp != NULL)
	{
		if (temp->value == pos)
		{
			NodeLink* pnew = (NodeLink*)malloc(sizeof(NodeLink));
			pnew->value = value;
			pnew->next = temp->next;
			temp->next = pnew;
			return 1;
		}
		temp = temp->next;
	}
	return 0;
}

#endif // !1
