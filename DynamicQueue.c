#include <stdio.h>
#include <malloc.h>
struct node {
int no;
struct node *next;
};
struct node *front,*rear;
void enque(int n) {
struct node *p;
p = (struct node*)malloc(sizeof(struct node));
p->no = n;
p->next = NULL;
if(front == NULL && rear == NULL) {
front = p;
rear = p;
} else {
rear->next = p;
rear = p;
}
}
void traverse() {
struct node *temp;
temp = front;
if(front == NULL) {
printf("queue is empty");
}
else {
while(temp != NULL) {
printf("\t%d",temp->no);
temp = temp->next;
}
}
}
void dequeue() {
if(front==NULL) {
printf("queue is empty");
}
else {
printf("\ndeleted items",front->no);
if(front == rear) {
front = NULL;
rear = NULL;
}
else {
front = front->next;
}
}
}
void sumAllElements() {
int sum=0;
struct node *temp;
temp = front;
if(front == NULL) {
printf("queue is empty");
}
else {
while(temp != NULL) {
sum = sum+temp->no;
temp = temp->next;
}
printf("\n sum is %d",sum); }
}
void greatest() {
int great=front->no;
struct node *temp;
temp = front;
if(front == NULL) {
printf("queue is empty");
}
else {
while(temp != NULL) {
if(temp->no>great) {
great = temp->no;
}
temp = temp->next;
}
printf("\n sum is %d",great); }
}
int main()
{
front = NULL;
rear = NULL;
enque(100);
enque(120);
enque(50);
enque(70);
enque(80);
enque(56);
traverse();
dequeue();
printf("\n after deletion");
traverse();
sumAllElements();
greatest();
return 0;
}