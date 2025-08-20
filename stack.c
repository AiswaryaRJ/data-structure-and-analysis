#include <stdio.h>
#define MAX 20
int stack[MAX];
int top=-1;
int isFull(){
	return top== MAX-1;
}
int isEmpty(){
	return top==-1;
	}
void push(int value){
if(isFull()){
	printf("stack overflow\n");}
else{
	stack[++top]=value;
	printf("%d pushed to stack\n",value);}}
int pop(){
if(isEmpty()){
	printf("stack underflow\n");
	return -1;}
else{
	int t=stack[top--];
	printf("the popped element is %d \n",t);
	return stack[top--];}}
int peek(){
if(isEmpty()){
	printf("stack empty\n");
	return -1;}
else{
return stack[top];}}
int main()
{
int choice,item,n,i,j,m;
printf("enter no of actions to be implemented\n");
scanf("%d",&m);
for(j=0;j<m;j++){
printf("select a no 1:push 2:pop 3:peek 4:checkifempty 5:checkiffull \n");
scanf("%d",&choice);
switch(choice){
 case 1:
  printf("enter no of element to be pushed\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
  printf("enter elemnt to be pushed\n");
  scanf("%d",&item);
  push(item);}
  break;
 case 2:
  pop();
  break;
 case 3:
  peek();
  printf("the element is %d \n",item);
  break;
 case 4:
  if(isEmpty())
  printf("stack empty\n");
  else
  printf("stack not empty\n");
  break;
 case 5:
  if(isFull())
  printf("stack full\n");
  else
  printf("the stack not full  \n");
  break;
  }}}
