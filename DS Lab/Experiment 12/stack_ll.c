#include<stdio.h>
#include<stdlib.h>
struct node* top = NULL;
void push(int);
int pop();
void Traversal();
struct node{
 int data;
 struct node *next; 
};
int main(){
 	int choice,want_continue, data;
 	printf("enter your choice 1.push, 2.pop, 3.display\n ");
 	do{
  	printf("enter your choice : ");
  	scanf("%d", &choice);
  	switch(choice){
   	case 1:
    		printf("enter the data: \n");
    		scanf("%d", &data);
    		push(data);  
    		break;
   	case 2:
    		pop();
    		break;
   	case 3:
    	Traversal();
    	}
 	printf("want to continue enter 1:");
 	scanf("\n%d", &want_continue);
 	}
 	while(want_continue==1);
}
void push(int data)
{
 	struct node *temp;
	 temp = (struct node*)malloc(sizeof(struct node));
	 temp -> data = data;
	 temp -> next = NULL;
	 if(top == NULL)
		  top = temp;
	 else{
		  temp->next = top;
		  top = temp; 
	 }
}
int pop(){
	 struct node *temp;
	 temp = (struct node*)malloc(sizeof(struct node));
	 int data;
	 if(top == NULL)
		  printf("stack is empty no elements to delete\n : ");
	 else{
	  temp = top;
	  data = temp->data;
	  top = temp->next;
	  free(temp);
	  temp = NULL;
	 }
	 return data;
}
void Traversal(){
	 struct node *temp = top;
	 if(top == NULL)
		  printf("stack is empty\n");
	 else{
		 while(temp != NULL){
	  printf("%d ", temp->data);
 	 temp = temp->next;
 	}
	}
}
