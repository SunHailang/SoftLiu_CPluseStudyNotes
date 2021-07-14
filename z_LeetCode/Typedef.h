#pragma once

#ifndef __TYPEDEF_H_
#define __TYPEDEF_H_

typedef struct _NodeLink
{
	int value;
	struct _NodeLink* next;
}NodeLink;


typedef struct _NodeTree
{
	int value;
	struct _NodeTree* left;
	struct _NodeTree* right;
}NodeTree;

typedef struct _NodeQueue
{
	struct _NodeTree* value;
	struct _NodeQueue* front;
	struct _NodeQueue* next;
}NodeQueue;

#endif // !__TYPEDEF_H_

