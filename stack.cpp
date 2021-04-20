#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<iostream>
using namespace std;
struct Node {
    int data;
    struct Node *next;

};
struct Node* head;

int size(){
    int size=0;
    struct Node* current;
       for(current = head; current != NULL; current = current->next) {
      size++;
   }
}


void push (int data){
struct Node* temp;
    temp = new Node();
if (!temp)
    {
        cout << "\nHeap Overflow";
        exit(1);
    }

    temp->data = data;

    temp->next = head;

    head = temp;
}
int isEmpty()
{
    return head == NULL;
}

int peek()
{

    if (!isEmpty())
        return head->data;
    else
        exit(1);
}

void pop()
{
    struct Node* temp;

    if (head == NULL)
    {
        cout << "\nStack Underflow" << endl;
        exit(1);
    }
    else
    {

        temp = head;

        head = head->next;

        temp->next = NULL;

        free(temp);
    }
}

