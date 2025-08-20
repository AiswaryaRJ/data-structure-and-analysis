#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top = -1;
void Push(int element)
{
if (top == MAX_SIZE -1)
{
	printf("stack overflow ");
	return;
}
top++;
stack[top] = element;
}
int Pop() {
	if (top == -1) {
	 	printf("stack underflow");
	 	return -1;
	 }
int element = stack[top];
top--;
return element;
}
int Peek() {
 if (top == -1) {
     printf("Stack is empty Underflow!\n");
     return -1; 
 }
 return stack[top];
}
bool IsEmpty() {
 return (top == -1);
}
void Display()
{ int i;
if(IsEmpty())
 printf("stack is empty");
 else
 {
 printf("stack content are");
 for(i=top;i>=0;i--)
 printf("%d ",stack[i]);
 }}
int main()
{
 int item, choice;
  printf("\t Implementation of Stack");
  do{
  printf("\n\n1.Push\n2.Pop\n3.Peek\n4.Display\n5.exit\n");
  printf("enter your choice ");
  scanf("%d", &choice);
 switch (choice) {
 case 1:
  	printf("\nEnter The item to be pushed :: ");
     scanf("%d", &item);
     Push(item);
     break;
case 2:
     if (IsEmpty())
     printf("\nEmpty stack!Underflow !!");
     else {
     item = Pop();
     printf("\nThe popped element is %d", item);
     }
     break;
case 3:
     if (IsEmpty())
     printf("\nEmpty stack!Underflow !!");
     else {
     item = Peek();
     printf("\nThe Top element is %d", item);
     }
     break;
case 4:
     Display();
     break;
case 5:
     exit(0);
    }
} while (1);
return 0;
}
