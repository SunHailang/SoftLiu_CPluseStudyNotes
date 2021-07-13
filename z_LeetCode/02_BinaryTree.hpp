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




#endif // !__BINARYTREE_H_
