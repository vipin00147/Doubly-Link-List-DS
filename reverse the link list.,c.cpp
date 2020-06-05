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
struct node* start;
int count=0;
void lastinsert(int item)  
    {  
        new_node = (struct node*)malloc(sizeof(struct node));     
         
        if(new_node == NULL)  
        {  
            printf("\nOVERFLOW");     
        }  
        else  
        {  
        count++;
            new_node -> data = item;  
            if(head == NULL)  
            {  
            	new_node -> prev = NULL;
                new_node -> next = NULL;  
                head = new_node;  
                printf("Node inserted\n");  
            }  
            else  
            {  
                temp = head;  
                while (temp -> next != NULL)  
                {  
                    temp = temp -> next;  
                }  
                temp->next = new_node;  
                new_node->prev=temp;
                new_node -> next = NULL;  
                printf("Node inserted\n");       
            }  
        }  
    }  
    void printing() {
    	start=head;
	 temp = head;
	while(temp != NULL) {
		printf("%d-",temp->data);
		temp = temp -> next;
	}
}
	void rev(struct node* head)
	{
		count=count/2;
		int swap;
		struct node* temp=head;
		while(start->next!=NULL){
			start=start->next;
		}
		if(head!=NULL)
		{
			while(count>0)
			{		
			swap=temp->data;
			temp->data=start->data;
			start->data=swap;
			//printf("\n%d <-> %d",temp->data,start->data);
			temp=temp->next;
			start=start->prev;	
			count--;
			}
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
	rev(head);
	printf("\n");
	printing();
}  
