#include<stdio.h>  
#include<stdlib.h>  
struct node  
{  
    int data;  
    struct node* next;
    struct node* prev;
};  
struct node* head; 
struct node* temp; 
struct node* new_node;
void lastinsert(int item)  
    {  
        new_node = (struct node*)malloc(sizeof(struct node));     
         
        if(new_node == NULL)  
        {  
            printf("\nOVERFLOW");     
        }  
        else  
        {  
            new_node -> data = item;  
            if(head == NULL)  
            {  
            	new_node -> prev = NULL;
                new_node -> next = NULL;  
                //head = new_node;  
                printf("Node inserted\n");  
            }  
            else  
            {  
                new_node -> prev = NULL;
                new_node -> next = head;  
                printf("Node inserted\n");       
            } 
			head = new_node; 
        }  
    }  
    void printing() {
	 temp = head;
	while(temp != NULL) {
		printf("%d-",temp->data);
		temp = temp -> next;
	}
}
main ()  
{  
	lastinsert(5);
	lastinsert(10);  
	lastinsert(15);  
	lastinsert(20);  
	printf("\n");
	printing();
}  
