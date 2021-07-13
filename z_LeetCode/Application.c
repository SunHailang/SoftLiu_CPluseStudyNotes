#include <stdio.h>

#include "01_链表.hpp";


int main(int arvc, char** arvg)
{
	printf("----------- Hello World -----------\n");

	NodeLink* head = NULL;
	head = CreatLink(5);
	AddLink(head, 8);
	AddLink(head, 10);
	AddLink(head, 3);

	NodeLink* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;

		printf("%d, ", temp->value);
	}
	printf("\n-----------------------\n");
	NodeLink* per = LinkReverse(head);
	temp = per;
	while (temp->next != NULL)
	{
		temp = temp->next;
		printf("%d, ", temp->value);
	}
	printf("\n-----------------------\n");

	int result = LinkDelete(per, 15);
	temp = per;
	printf("result=%d\n", result);
	while (temp->next != NULL)
	{
		temp = temp->next;
		printf("%d, ", temp->value);
	}
	printf("\n-----------------------\n");

	int inster = LinkInster(per, 3, 15);
	printf("inster=%d\n", inster);
	temp = per;
	while (temp->next != NULL)
	{
		temp = temp->next;
		printf("%d, ", temp->value);
	}
	printf("\n-----------------------\n");



	while (per !=NULL)
	{
		temp = per->next;
		free(per);
		per = temp;
	}

	printf("\nAny Key Continue...");
	getchar();
	return 0;
}