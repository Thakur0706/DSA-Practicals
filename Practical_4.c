#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 5

int front =-1 , rear =-1;
int  queue[MAX_SIZE];


int isfull(){
     return(rear + 1 % MAX_SIZE == front);
     
}

int isempty(){
     return(front == -1);
      
}

void enqueue(int data){
    if (isfull()){
        printf("Queue overflow\n");
        return;
    }
    if(isempty()){
        front = 0  ;
    }
    rear = (rear + 1 )% MAX_SIZE;
    queue[rear] = data;
    printf("Element %d inserted\n", data);
}

void dequeue(){
    if(isempty()){
        printf("Queue Underflow\n");
        return;
    }
    int data = queue[front];
    if (front == rear){
        front = rear = -1;
    }
    else{
        printf("element deleted : %d \n",queue[front]);
        front = (front+1) % MAX_SIZE;
        
    }
}
void display(){
    if(isempty()){
        printf("Queue is empty \n");
        return;
    }
    else{
        printf("Elements in the queue are:");
        for(int i = front;i<=rear;i++){
            printf("%d ",queue[i]);
        }
        printf("\n");
        
    }
}
int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30); 
    display();
    dequeue();
    enqueue(45);
    display();
    enqueue(67);
    enqueue(45);
    enqueue(53);
    enqueue(44);
    dequeue();
    dequeue();
    dequeue();
    dequeue();
     display();
    return 0;
}
