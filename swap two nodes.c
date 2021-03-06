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
	 temp = head;
	while(temp != NULL) {
		printf("%d-",temp->data);
		temp = temp -> next;
	}
}
void rev(struct node** head,int x,int y){
  int var;
  struct node* temp=*head;
  struct node* prev=NULL;
  struct node* next=NULL;
  while(temp!=NULL)
  {
    if(temp->data==x)
    {
      prev=temp;
    }
    if(temp->data==y)
    {
      next=temp;
    }
    temp=temp->next;
  }
  if(prev!=NULL && next!=NULL)
  {
    var =prev->data;
    prev->data=next->data;
    next->data=var;
  }
}
int main()  
{  
	lastinsert(5);
	lastinsert(10);  
	lastinsert(15);  
	lastinsert(20);
	lastinsert(25);  
	printf("\n");
	printing();
	printf("\n");
	rev(&head,25,25);
	printing();
}  
