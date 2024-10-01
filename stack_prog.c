#include<stdio.h>
#include<stdlib.h>
#define max 3
int stk[3],top=-1,ch;
char chk();
void push();
void pop();
void display();

void main(){
while (1){
printf("\n1. Push \n2. Pop \n3. Display \n4. Exit: ");
printf("Enter choice: ");
scanf("%d",&ch);
switch(ch){
case 1: push();
break;
case 2: pop();
break;
case 3: display();
break;
case 4: exit(0);}
}
}

char chk(){
if (top==-1)
return ('a');
if (top>(max-1))
return('b');
}

void push(){
char ch=chk();
if (ch=='b'){
printf("STACK OVERFLOW\n");
return;}
else{
int element;
top++;
printf("Enter element: ");
scanf("%d",&element);
stk[top]=element;
printf("Element pushed into stack \n");}
}

void pop(){
char ch=chk();
if (ch=='a'){
printf("STACK UNDERFLOW\n");
return;}
else{
printf("%d\n",stk[top]);
top--;
printf("Element popped from stack \n");}
}

void display(){
char ch=chk();
if (ch=='a'){
printf("STACK EMPTY\n");
return;}
else{
printf("Stack contents:\n");
for (int i=top; i>=0; i--)
printf("%d\n",stk[i]);}
}
