 #include <stdio.h>
#define max 5
int queue[max];
int front =-1, rear =-1;
void enqeue(int n) {
if(rear == max-1) {
printf("queue is overflow");
} else {
if(front == -1) {
front = 0;
}
rear++;
queue[rear] = n;
}
}
void deqeue() {
if(front == -1 || front>rear) {
printf("queue is empty");
} else {
printf("\n deleted element is %d",queue[front]);
front++;
}
}
void display() {
if(front == -1 || front>rear) {
printf("queue is empty");
} else {
for(int i=front; i<=rear; i++) {
printf("\n the element are %d",queue[i]);
}
}
}
int main()
{
enqeue(10);
enqeue(20);
enqeue(30);
enqeue(40);
enqeue(50);
display();
deqeue();
return 0;
}