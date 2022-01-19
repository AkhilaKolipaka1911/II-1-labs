#include<stdio.h>
#include<stdlib.h>
struct node * rear = NULL;
struct node * front = NULL;
void enqueue(int);
int dequeue();
void Traversal();
struct node{
	int data;
	struct node *next;
};
int main(){
	int want_continue,choice,data;
	printf("enter choice 1.enqueue, 2.dequeue, 3.Traversal\n");
	do{
		printf("enter your choice :");
		scanf("%d",&choice);
		switch(choice){
			case 1:printf("enter the data : ");
				scanf("%d",&data);
				enqueue(data);
				break;
			case 2:dequeue();
				break;
			case 3:Traversal();
				break;
			}
			printf("want to continue enter 1:");
			scanf("%d",&want_continue);
		}
		while(want_continue == 1);
}
void enqueue(int data)
{
	struct node *temp;
	temp = (struct node*)malloc(sizeof(struct node*));
	temp -> data = data;
	temp -> next = NULL;
	if(front == NULL)
		front = rear = temp;
	else{
		rear -> next = temp;
		rear = temp;
		}
}
int dequeue()
{
	struct node * temp;
	int data;
	if(front == NULL){
		printf("queue is empty ");
	}
	else{
		temp = front;
		data = temp -> data;
		front =  front -> next;
		free(temp);
	}
	return data;
}	
void Traversal()
{
	struct node * temp;
	temp = front;
	if(front == NULL){
		printf("queue is empty");
	}
	else{
		while(temp != NULL){
			printf("%d\t",temp-> data);
			temp = temp -> next;
	
		}
	}
} 
