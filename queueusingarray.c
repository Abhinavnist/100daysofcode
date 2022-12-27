#include<stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(){
    int data;
    printf("enter the data: \n");
    scanf("%d", &data);
    if (rear==N-1)
    {
        printf("overflow\n");
    }
    else if (front==-1 && rear==-1)
    {
        front=rear=0;
        queue[rear]=data;

    }
    else{
        rear++;
        queue[rear]=data;
    }
    
}

void dequeue(){
    if (rear== -1 && front == -1)
    {
        printf("underflow\n");
    }
    else if (front==rear)
    {   
        printf("The dequeue element is %d \n",queue[front]);
        front=rear=-1;
    }
    else{
        printf("The dequeue element is %d \n",queue[front]);
        front++;
    }
    
}

void display(){
    // int i;
    if (rear== -1 && front == -1)
    {
        printf("underflow\n");
    }
    else{
        for (int i = front; i < rear+1; i++)
        {
            printf("%d ",queue[i]);
        }
        
    }
    
}

void peek(){
    if (rear== -1 && front == -1)
    {
        printf("underflow\n");
    }
    else{
        printf("%d \n",queue[front]);
    }
}
int main(){
 int ch;
    do
    {
        printf("enter the choice: \n 1. push\n 2. pop \n 3. peek\n 4. display\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1: enqueue();
        break;
        case 2: dequeue();
        break;
        case 3: peek();
        break;
        case 4: display();
        break;
        default:
            printf("wrong choice  \n");
        }
    } while (ch != 0);
return 0;
}