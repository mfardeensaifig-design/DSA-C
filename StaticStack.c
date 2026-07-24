 #include <stdio.h>
#define Max 5
int Stack[Max];
int top = -1;
void push(int n) {
if(top == Max-1) {
printf("Stack overflow");
} else {
top++;
Stack[top] = n;
}
}
void pop() {
if(top == -1) {
printf("stack is empty");
} else {
int a = Stack[top];
printf("%d",a);
top--;
}
}
void display() {
if(top == -1) {
printf("stack is empty");
} else {
for(int i=top; i>=0;i--) {
printf("\n elements are %d",Stack[i]);
}
}
}
int main()
{
push(10);
push(20);
push(30);
push(40);
push(50);
display();
//pop();
printf("\n");
//display();
return 0;
}