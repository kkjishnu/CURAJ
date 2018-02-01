#include<graphics.h>
#include<stdio.h>
void main()
{
int gd = DETECT, gm = 0;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
putpixel(200,100,RED);
setcolor(WHITE);
line(100,50,200,100);
circle(30,30,30);
rectangle(250,50,350,150);
getch();
closegraph();

}