#include <stdio.h>
#include <stdlib.h>

#define size 100

int stack[size];
int top = -1;

void push(int item)
{
    if (top == size - 1)
    {
        printf("Oeverflow condition ");
    }
    else
    {
        top++;
        stack[top] = item;
        printf("Succesfully push ");
    }
}

void pop()
{
    if (top == -1)
    {
        printf("Underflow ");
    }
    else
    {
        printf("Enter the item = %d", stack[top]);
        top--;
    }
}

void display()
{
    if (top == -1)
    {
        printf("List is empty ");
    }

    else
    {
        printf("Elements of stack are ");
        for (int i = top; i >= 0; i--)
        {
            printf("%d", stack[i]);
            printf("\n");
        }
    }
}
void empty()
{
    if (top == -1)
    {
        printf("List is empty ");
    }
    else
    {
        printf("not empty ");
    }
}
void peak()
{
    if (top == -1)
    {
        printf("List is empty ");
    }
    else
    {
        printf("peak value = %d\n ", stack[top]);
    }
}

int main()
{
    int op, x;
    printf(" 1.for push\n 2.for pop\n 3.for display\n 4.for empty\n 5.for peak\n 6.for exit\n ");
    printf("Enter your choice ");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("Enter element");
        scanf("%d", &x);
        push(x);
        break;

    case 2:
        pop();
        break;

    case 3:
        display();
        break;

    case 4:
        empty();
        break;

    case 5:
        peak();
        break;

    case 6:
        exit(0);
        return 0;
    }
}

