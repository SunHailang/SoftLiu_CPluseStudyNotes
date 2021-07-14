#pragma once
#ifndef __02_BINARYTREE_H_
#define __02_BINARYTREE_H_

#include <stdio.h>
#include <stdlib.h>
#include "Typedef.h"
#include "Queue.hpp"




NodeTree* NodeTreeCreateRoot(int value)
{
	NodeTree* head = (NodeTree*)malloc(sizeof(NodeTree));
	if (head)
	{
		head->value = value;
		head->left = NULL;
		head->right = NULL;
	}
	return head;
}

void NodeTreeAdd(NodeTree* head, int value)
{
	NodeTree* temp = head;
	if (head == NULL) return;
	if (head->value < value)
	{
		if (head->right != NULL)
		{
			NodeTreeAdd(head->right, value);
		}
		else
		{
			NodeTree* pnew = (NodeTree*)malloc(sizeof(NodeTree));
			if (pnew)
			{
				pnew->value = value;
				pnew->left = NULL;
				pnew->right = NULL;
			}
			head->right = pnew;
		}
	}
	else
	{
		if (head->left != NULL)
		{
			NodeTreeAdd(head->left, value);
		}
		else
		{
			NodeTree* pnew = (NodeTree*)malloc(sizeof(NodeTree));
			if (pnew)
			{
				pnew->value = value;
				pnew->left = NULL;
				pnew->right = NULL;
			}
			head->left = pnew;
		}
	}
}


int height(NodeTree* root)
{
	if (root == NULL) return 0;

	int leftHight = height(root->left);
	int rightHight = height(root->right);

	if (leftHight == -1 || rightHight == -1 || abs(leftHight - rightHight) > 1) return -1;

	return max(leftHight, rightHight) + 1;
}
// 判断一颗树是否为 平衡二叉树
// 1：是， 0：不是
int NodeTreeIsBanced(NodeTree* head)
{
	if (head == NULL) return 1;

	return height(head) >= 0;
}

// 层序遍历  
void NodeTreeSequenceTraversal(NodeTree* head)
{
	if (head == NULL) return;
	NodeTree* temp = head;
	NodeQueue* queue = InitQueue();
	int queueLength = 0;
	PushQueue(queue, temp);
	queueLength++;
	int nextLength = 0;
	NodeTree* p = NULL;

	while ((p = PopQueue(queue)) != NULL)
	{
		queueLength--;
		printf("%d, ", p->value);
		if (p->left)
		{
			PushQueue(queue, p->left);
			nextLength++;
		}
		if (p->right)
		{
			PushQueue(queue, p->right);
			nextLength++;
		}
		if (queueLength == 0)
		{
			queueLength = nextLength;
			nextLength = 0;
			printf("\n");
		}
	}
}


#endif // !__BINARYTREE_H_
