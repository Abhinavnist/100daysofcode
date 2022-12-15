#include <stdio.h>

int stack[5];
int top = -1;
void push()
{
    int data;
    printf("enter the data: \n");
    scanf("%d", &data);
    if (top == 5 - 1)
    {
        printf("stack is overflow\n");
    }
    else
    {
        top++;
        stack[top] = data;
    }
}
void pop()
{
    int item;
    if (top == -1)
    {
        printf("nderflow");
    }
    else
    {
        item = stack[top];
        top++;
        printf("the pop item is %d \n", item);
    }
}
void peek()
{
    if (top == -1)
    {
        printf("nderflow");
    }
    else
    {

        printf("the peek item is %d \n", stack[top]);
    }
}
void display()
{
    int i;
    for (i = top; i >= 0; i--)
    {
        printf("%d-> ", stack[i]);
        
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
        case 2: pop();
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