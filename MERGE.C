#include<stdio.h>
void display(int *,int);
void read(int *,int);
int merge(int *,int *,int,int,int *);
void main()
{
int a[20],b[20],k;
int c[20],n,m;
clrscr();
printf("Enter the no: of elements of the first array\t");
scanf("%d",&m);
read(a,m);
printf("Enter the no: of elements of ths second array\t");
scanf("%d",&n);
read(b,n);
k=merge(a,b,m,n,c);
display(c,k);
getch();
}
void read(int *p,int m)
{
int i;
printf("Enter the elements\t");
for(i=0;i<m;i++)
scanf("%d",&p[i]);
}
int merge(int *a,int *b,int m,int n,int *c)
{
int i,j,k;
i=0;j=0;k=0;
while(i<m &&j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
}
else if(b[j]<a[i])
{
c[k]=b[j];
j++;
}
else
{
c[k]=a[i];
i++;
j++;
}
k++;
}
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
return k;
}
void display(int *c,int k)
{
int i;
printf("the merged array is\t");
for(i=0;i<k;i++)
printf("%d",c[i]);
}
