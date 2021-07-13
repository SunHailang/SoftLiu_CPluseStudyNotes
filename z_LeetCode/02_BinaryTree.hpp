#pragma once
#ifndef __02_BINARYTREE_H_
#define __02_BINARYTREE_H_


#include <stdlib.h>
#include "Typedef.h"




NodeTree* CreateRoot(int value)
{
	NodeTree* head = (NodeTree*)malloc(sizeof(NodeTree));
	head->value = value;
	head->left = NULL;
	head->right = NULL;
	return head;
}

void AddNode(NodeTree* head, int value)
{
	NodeTree* temp = head;
	if (head == NULL)
	{
		return;
	}
	if (head->value < value)
	{
		if (head->right != NULL)
		{
			AddNode(head->right, value);
		}
		else
		{
			NodeTree* pnew = (NodeTree*)malloc(sizeof(NodeTree));
			pnew->value = value;
			pnew->left = NULL;
			pnew->right = NULL;
			head->right = pnew;
		}
	}
	else
	{
		if (head->left != NULL)
		{
			AddNode(head->left, value);
		}
		else
		{
			NodeTree* pnew = (NodeTree*)malloc(sizeof(NodeTree));
			pnew->value = value;
			pnew->left = NULL;
			pnew->right = NULL;
			head->left = pnew;
		}
	}
}


// 层序遍历  
void SequenceTraversal(NodeTree* head)
{
	NodeTree* temp = head;

	while (head != NULL)
	{
		//int 
	}
}


#endif // !__BINARYTREE_H_
