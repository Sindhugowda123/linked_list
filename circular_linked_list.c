#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
		char n_data;
		struct node *link;;
}Slist;

int main()
{
		Slist *head = NULL;
		Slist *second_node = NULL;
		Slist *third_node = NULL;
		Slist *fourth_node = NULL;
		Slist *fifth_node = NULL;

		//to create five nodes
		head = malloc(sizeof(Slist));
		second_node = malloc(sizeof(Slist));
		third_node = malloc(sizeof(Slist));
		fourth_node = malloc(sizeof(Slist));
		fifth_node = malloc(sizeof(Slist));

		//updating first node 
		head->n_data = 'a';
		head->link = second_node;

		//updating second node
		second_node->n_data = 'e';
	    second_node->link = third_node;

		//updating third node
		third_node->n_data = 'i';
	    third_node->link = fourth_node;	

		//updating fourth node
		fourth_node->n_data = 'o';
	    fourth_node->link = fifth_node;	

		//updating fifth node
		fifth_node->n_data = 'u';
	    fifth_node->link = head;

		//to print list
		if(head == NULL)
		printf("LIST_IS_EMPTY\n");
		Slist *temp = head;
		for(int i=0;temp != NULL;i++)
		{
				printf("node[%d] = %c\n", i, temp->n_data);
				temp = temp->link;
		}
}
