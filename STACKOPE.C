#include<stdlib.h>
struct node
{
int data;
struct node *link;
};
struct node *TOP=NULL;
void push()
{
struct node *ne=(struct node*)malloc(sizeof(struct node));
if(ne==NULL)
{
printf("out of memory");
return;
}
printf("\nEnter the element to push\n");
scanf("%d",&ne->data);
ne->link=TOP;
TOP=ne;
}
void pop()
{
struct node *ptr;
if(TOP==NULL)
{
printf("stack empty");
return;
}
printf("poped the element %d\n",TOP->data);
ptr=TOP;
TOP=TOP->link;
free(ptr);
}
void search()
{
struct node *ptr;
int x,pos=1;
if(TOP==NULL)
{
printf("\nstack is empty");
return;
}
ptr=TOP;
printf("Enter the element to be searched\n");
scanf("%d",&x);
while(ptr!=NULL)
{
if(ptr->data==x)
{
printf("\nElement found at %d the position from top\n",pos);
break;
}
ptr=ptr->link;
pos++;
}
if(ptr==NULL)
printf("Element not found");
}
void display()
{
struct node *ptr=TOP;
if(TOP==NULL)
{
printf("\nstack is empty");
return;
}
ptr=TOP;
printf("\nThe elements are:\n");
while(ptr!=NULL)
{
printf("%d",ptr->data);
ptr=ptr->link;
}
}
void main()
{
int ch=0;
clrscr();
while(ch!=5)
{
printf("\nMENU\n1.PUSH\n2.POP\n3.SEARCH\n4.DISPLAY\n5.EXIT\nEnter your choice");
scanf("%d",&ch);
switch(ch)
{
case 1:push();
       break;
case 2:pop();
      break;
case 3:search();
       break;
case 4:display();
       break;
       case 5:printf("GOOD BYE");
getch();
}
}
}