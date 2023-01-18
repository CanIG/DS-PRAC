#include<stdio.h> 
#include<conio.h>
struct LL {
int data;
struct LL *next;
};
struct LL *start=NULL;
void inBeg(int value) {
struct LL *nn=(struct LL *)malloc(sizeof(struct LL)); 
nn->data=value;
nn->next=start; 
start=nn;
}
void inLast(int value) { 
struct LL *temp=start;
struct LL *nn=(struct LL *)malloc(sizeof(structLL)); 
nn->data=value;
nn->next=NULL;
if(start==NULL) 
start=nn;
else {
while(temp->next!=NULL) 
temp=temp->next;
temp->next=nn;
}
}
void deBeg() { 
if(start==NULL)
printf("\nLinked list empty\n"); 
else
start=start->next;
}
void deLast() {
struct LL *temp=start;
if(start==NULL)
printf("\nLinked list empty\n"); 
else if(temp->next==NULL)
start=NULL;
else while(temp->next->next!=NULL) 
temp=temp->next;
}
void display() {
struct LL *temp=start; 
if(start==NULL)
printf("\nLinked list empty\n"); 
else while(temp!=NULL) {
printf("%d ",temp->data); 
temp=temp->next;
}
}
void main() {
int value,choice; 
clrscr();
while(1) {
printf("\n1.Insert at Beginning\n2.Insert at Last position"); 
printf("\n3.delete from Beginning\n4.delete from Last position"); 
printf("\n5.Display\n6.Exit\n");
printf("Enter your choice:"); 
scanf("%d",&choice); 
switch(choice) {
case 1: printf("\nEnter the element\t");
scanf("%d",&value);
inBeg(value);
break;
case 2: printf("\nEnter the element\t");
scanf("%d",&value);
inLast(value);
break;
case 3: deBeg();
break;
case 4: deLast();
break;
case 5: display();
case 6:
break;
exit(1);
default: printf("Wrong Input.\n");
break;
}
}
}
