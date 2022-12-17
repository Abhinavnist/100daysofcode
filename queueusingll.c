#include<stdio.h>

struct node{
    int data;
    struct node* next;
};

struct node * front=0;
struct node * rear=0;

void enqueue(){
    int data;
    printf("enter the data: \n");
    scanf("%d", &data);
    struct node * newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if (front==0 && rear==0)
    {
        front=rear=newnode;
    }
    else{
        rear->next=newnode;
        rear=newnode;
    }
}

void dequeue(){
    struct node* temp;
    temp=front;
    if (rear== 0 && front == 0)
    {
        printf("underflow\n");
    }
    else{
        printf("The dequeue element is %d \n",front->data);
        front=front->next;
        free(temp);
    }
}


void display(){
    struct node* temp;
    temp=front;
    if (front==0 && rear==0)
    {
        printf("underflow");
    }
    else{
        while (temp!=0)
        {
            printf("%d ",temp->data);
            temp=temp->next;
        }
    }
}


void peek(){
    if (front==0 && rear==0)
    {
        printf("underflow");
    }
    else{
        printf("The peek element is %d ",front->data);
    }
}


int main(){
 int ch;
    do
    {
        printf("enter the choice: \n 1. push\n 2. pop \n 3. peek\n 4. display\n 0. exit\n");
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