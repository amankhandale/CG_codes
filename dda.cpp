#include<graphics.h>
#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
using namespace std;
int main()
{
int gd=DETECT,gm;
int x1,y1,x2,y2,i,step, xn, yn,dx,dy;
initgraph(&gd,&gm, ""); 
cout<<"Enter the starting coordinates";
cin>>x1>>y1;
cout<<"Enter the end coordinates";
cin>>x2>>y2;
dx=x2-x1;
dy=y2-y1;
if(abs (dx)>abs (dy))
{
  step=abs(dx);
}
else
{
step=abs(dy);
} 
xn=dx/step;
yn=dy/step;
for(i=1;i<=step;i++)
{ 
putpixel(x1,y1,LIGHTBLUE); 
x1=x1+xn;
y1=y1+yn;
} 
getch();
closegraph();
}
