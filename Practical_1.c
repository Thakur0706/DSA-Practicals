#include <stdio.h>
#include <stdlib.h>
int max =5;
int array[5];
int top =-1;

void push(int x){
    if(top == max-1){
        printf("\nStack overflow");
    }
    else{
        printf("\npushed element is %d",x);
        top++;
        array[top]=x;
    }
}

void pop(){
    if(top == -1){
        printf("\nstack underflow");
    }
    else{
        printf("\npopped element is %d",array[top]);
        top--;
    }
}
void peek(){
    if(top == -1){
        printf("element not found");
    }
    else{
        printf("\nTop element is %d",array[top]);
    }
}

void show(){
    printf("\n Stack is as follows:");
    for(int i = top;i>=0;i--){
        printf("%d ",array[i]);
    }
}
int main() {
    int a;
printf("enter the number you want to push:\n");
scanf("%d",&a);
  push(a);
  push(5);
  push(2);
  push(44);
  push(53);
  push(100);
  peek();
  show();
  pop();
  pop();
  show();
  pop();
  peek();
  push(3);
  pop();
  show();
  
    return 0;
}
