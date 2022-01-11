#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
		int n_data;
		struct node *link;;
}Slist;

int main()
{
		Slist *head = NULL;
		Slist *second_node = NULL;
		Slist *third_node = NULL;

		//to create three nodes
		head = malloc(sizeof(Slist));
		second_node = malloc(sizeof(Slist));
		third_node = malloc(sizeof(Slist));

		//updating first node 
		head->n_data = 100;
		head->link = second_node;

		//updating second node
		second_node->n_data = 200;
	    second_node->link = third_node;

		//updating third node
		third_node->n_data = 300;
	    third_node->link = NULL;	

		//to print list
		if(head == NULL)
		printf("LIST_IS_EMPTY\n");
		Slist *temp = head;
		for(int i=0;temp != NULL;i++)
		{
				printf("node[%d] = %d\n", i, temp->n_data);
				temp = temp->link;
		}
}
		

