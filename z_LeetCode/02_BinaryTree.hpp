#pragma once
#ifndef __02_BINARYTREE_H_
#define __02_BINARYTREE_H_


#include <stdlib.h>


typedef struct _TreeNode
{
	int value;
	struct _TreeNode* left;
	struct _TreeNode* right;
}TreeNode;


TreeNode* CreateRoot(int value)
{
	TreeNode* head = (TreeNode*)malloc(sizeof(TreeNode));
	head->value = value;
	head->left = NULL;
	head->right = NULL;
	return head;
}

void AddNode(TreeNode* head, int value)
{
	TreeNode* temp = head;
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
			TreeNode* pnew = (TreeNode*)malloc(sizeof(TreeNode));
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
			TreeNode* pnew = (TreeNode*)malloc(sizeof(TreeNode));
			pnew->value = value;
			pnew->left = NULL;
			pnew->right = NULL;
			head->left = pnew;
		}
	}
}


// 层序遍历  
void SequenceTraversal(TreeNode* head)
{
	TreeNode* temp = head;

	while (head != NULL)
	{
		//int 
	}
}


#endif // !__BINARYTREE_H_
