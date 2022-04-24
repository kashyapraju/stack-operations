#include <stdio.h>
#include <stdlib.h>

struct node
{
    struct node *next;
    int data;
};

struct node *top = NULL;
void push(int item)
{
    struct node *new;
    new = (struct node *)malloc(sizeof(struct node));

    if (new == NULL)
    {
        printf("Overflow condition");
    }
    else
    {
        new->data = item;
        if (top == NULL)
        {
            top = new;
            top->next = NULL;
        }

        else
        {
            new->next = top;
            top->next = NULL;
        }
        printf("Push succesfullf ");
    }
}

void pop()
{
    struct node *t = top;
    if (top == NULL)
    {
        printf("stack is empty underflow");
    }
    else
    {
        if (top->next == NULL)
        {
            printf("poped value is %d\n ", top->data);
            free(top);
            top = NULL;
        }
        else
        {
            t = top;
            top->next = top;
            free(t);
        }
    }
}

void display()
{
    struct node *t = top;
    if (top == NULL)
    {
        printf("Your stack is empty ");
    }
    else
    {
        while (t != NULL)
        {
            printf("%d\n", t->data);
            t = t->next;
        }
        printf("\n");
    }
}

void isEmpty()
{
    if (top == NULL)
    {
        printf("Stack is empty.\n");
    }
    else
    {
        printf("Stack is not empty.\n");
    }
}
void peek()
{

    if (top == NULL)
    {
        printf("Stack is underflow.\n");
    }
    else
    {
        printf("Peek value = %d\n", top->data);
    }
}
int main()
{
    int op, x;
    while (1)
    {
        printf("1.Push 2.Pop 3.Display 4.Is Empty 5.Peek 6.Exit\n");
        printf("Enter your option : ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            printf("Enter element : ");
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
            isEmpty();
            break;
        case 5:
            peek();
            break;
        case 6:
            exit(0);
        }
    }
    return 0;
}