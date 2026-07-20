// Dynamic linked list
 #include <stdio.h>
#include <malloc.h>
struct node {
int no;
struct node *next;
};
struct node *start; // start pointer variables
void create(int n) {
struct node *p,*temp; // p and temp both are pointer variable , the type of both is struct node 
p = (struct node*)malloc(sizeof(struct node));// memory allocation using the malloc on runtime
p->no = n;
p->next = NULL;
if(start == NULL) {
start = p;
} else {
temp = start; // temp is temprory memory allocation
while(temp->next!=NULL) {
temp = temp->next;
}
temp->next = p;
}
}
void insertAtbegining(int n) {
struct node *p;
p = (struct node*)malloc(sizeof(struct node));
p->no = n;
p->next =start;
start = p;
}
void traverse() {// traverse is use to go every node in the linked list
if(start == NULL) {
printf("linked list is empty");
} else{
struct node *temp;
temp = start;
while(temp!=NULL) {
printf("%d\t",temp->no);
temp = temp->next;
}
}
}
int countNode() {// count define the number of nodes that is use in the node
struct node *temp;
temp = start;
if(temp == NULL) {
printf("the nodes are zero");
}
int c = 0;
while(temp!=NULL)
{
temp = temp->next;
c++;
}
return c;
}
void insertAtAnyLocation() {
struct node *p,*temp;
p = (struct node *)malloc(sizeof(struct node));
int loc,value;
printf("enter the location\n");
scanf("%d",&loc);
printf("enter the value\n");
scanf("%d",&value);
if(loc == 1) {
insertAtbegining(value);
}
int totalNode = countNode();
if(loc == totalNode ) {
create(value);
}
temp = start;
p->no = value;
for(int i=0;i<loc-2;i++) {
temp = temp->next;
}
p->next = temp->next;
temp->next = p;
}
void deleteFromBegining() {
struct node *temp;
if(start == NULL) {
printf("linked list is null");
} else {
temp = start;
start = start->next;
free(temp);
}
}
int main()
{
start = NULL;
create(100);
create(120);
create(130);
create(150);
create(160);
create(180);
create(713);
insertAtbegining(110);
traverse();
printf("\n");
insertAtAnyLocation();
int totalNode = countNode();
deleteFromBegining();
traverse();
printf("\nthe total nodes are %d",totalNode);
return 0;
}