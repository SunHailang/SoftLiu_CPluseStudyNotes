#pragma once

#ifndef __QUEUE_H_
#define __QUEUE_H_

#include <stdlib.h>
#include "Typedef.h"

NodeTree* InitQueue()
{
	NodeQueue* head = (NodeQueue*)malloc(sizeof(NodeQueue));
	if (head)
	{
		head->front = NULL;
		head->next = NULL;
	}
	return head;
}

// 入队列
void PushQueue(NodeQueue* head, NodeTree* root)
{
	NodeQueue* temp = head->next;
	NodeQueue* pnew = (NodeQueue*)malloc(sizeof(NodeQueue));
	if (pnew)
	{
		pnew->next = temp;
		pnew->front = head;
		pnew->value = root;
	}
	if (temp)
		temp->front = pnew;
	head->next = pnew;
}
// 出队列
NodeTree* PopQueue(NodeQueue* head)
{
	if (head->next == NULL) return NULL;
	NodeQueue* temp = head->next;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	NodeQueue* front = temp->front;
	front->next = NULL;
	NodeTree* root = temp->value;
	free(temp);
	return root;
}


#endif
