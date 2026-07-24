 #include <stdio.h>
#include <stdlib.h>
struct node {
int no;
struct node *next;
};
struct node *top = NULL;
void insert(int n) {
struct node *p;
p = (struct node*)malloc(sizeof(struct node));
p->no = n;
p->next = top;
top = p;
}
void pop() {
if(top == NULL) {
printf("stack is empty");
return;
}
struct node *temp;
temp = top;
printf("pop element is %d",temp->no);
top = top->next;
free(temp);
}
void peek() {
if(top == NULL) {
printf("stack is empty");
} else {
printf("peek element is %d",top->no);
}
}
void traverse() {
struct node *temp;
if(top == NULL) {
printf("\n stack is empty");
} else {
temp = top;
while(temp!=NULL) {
printf("\n elements are %d",temp->no);
temp = temp->next;
}
}
}
int main()
{
insert(10);
insert(20);
insert(30);
insert(40);
insert(50);
pop();
traverse();
peek();
return 0;
}
