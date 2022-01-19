#include<stdio.h>
#include<stdlib.h>
#define MaxSize 5
int top =0;
int stack[5];
void push(int);
int pop();
void traversal();
int main()
{
	int choice,data,p,want_continue;
        printf("Enter your choice: 1.push, 2.pop, 3.traversal, 4.exit\n");
	 do{
	        printf("enter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:printf("Enter the element to insert:");
			       scanf("%d",&data);
			       push(data);
			       break;
			case 2:p = pop();
			       printf("poped element = %d\n",p);
			       break;
			case 3:traversal();
			       break;
			}
			printf("wnat to continue, enter 1:");
			scanf("%d",&want_continue);
		}
		while(want_continue == 1);
	return 0;
}
void push(int data)
{
	if(top>=MaxSize)
	{
		printf("Stack over flow\n");
	}
	else
	{
		stack[++ top]=data;
	}
}
int pop()
{
	if(top<0)
	{
		printf("Stack underflow\n");
	}
	else
	return stack[top--];
	return 0;
}
void traversal()
{
	int i;
	if(top<0)
	{
		printf("Stack is empty\t");
	}
	else
	        printf("linked list:");
		for(i=1;i<=top;i++)
		{
			printf("%d\t",stack[i]);
		}
}

		
		
		
		
		

