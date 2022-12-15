#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *top = 0;

void push()
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("enter the data: \n");
    scanf("%d", &newnode->data);
    newnode->next = top;
    top = newnode;
}
void pop()
{

    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("underflow\n");
    }
    else
    {
        printf("the pop item is %d \n", top->data);
        top = top->next;
        free(temp);
    }
}
void peek()
{
    if (top == 0)
    {
        printf("underflow\n");
    }
    else
    {
        printf("the pop item is %d \n", top->data);
    }
}
void display()
{
    struct node *temp;
    temp = top;
    if (top == 0)
    {
        printf("underflow\n");
    }
    else
    {
        while (temp != 0)
        {
            printf("%d ", temp->data);
            temp = temp->next;
        }
    }
}
int main()
{
    int ch;
    do
    {
        printf("enter the choice: \n 1. push\n 2. pop \n 3. peek\n 4. display\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            peek();
            break;
        case 4:
            display();
            break;
        default:
            printf("wrong choice  \n");
            break;
        }
    } while (ch != 0);
    return 0;
}