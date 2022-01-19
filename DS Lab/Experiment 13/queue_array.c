#include <stdio.h>
#include <stdlib.h>
# define max_size 10
int Isfull();
int Isempty();
int Enqueue(int);
int Dequeue();
int Rear = -1;
int Front = -1;
int Q[max_size];
int main(){
    int choice,value,want_continue;
    printf("Enter choice: 1.Enqueue 2.Dequeue\n");
    do{
       printf("enter choice\n");
       scanf("%d",&choice);
       switch(choice){
              case 1:printf("enter value to be enqueued:");
                     scanf("%d",&value);
                     Enqueue(value);
                     break;
              case 2:value = Dequeue();
                     printf("%d",value);
                     break;
      }
      printf("want to continue,enter 1");
      scanf("%d",&want_continue);
      }
      while(want_continue == 1);
      return 0;
}
int Isfull(){
    return Rear == max_size -1;
}
int Isempty(){
    return Front == -1;
}
int Enqueue(int item){
    if(Isfull() == 1){
                  printf("Overflow\n");
    }
    if(Front == -1){
                  Front = Rear = 0;
    }
    else{
           Rear += 1;
    }
    Q[Rear] = item;
}
int Dequeue(){
    int item;
    if(Isempty() == 1){
              printf("Underflow\n");
              exit(0);
     }
     item = Q[Front];
     if(Front == Rear){
               Front = Rear = -1;
      }
      else{
           Front += 1;
      }
      return item;
}
