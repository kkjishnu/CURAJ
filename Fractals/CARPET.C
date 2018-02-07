#include <stdio.h>
#include <graphics.h>

void carpet(int x1,int y1, int x2, int y2)
{
    int xlen,ylen;
    xlen = x2-x1;
    ylen = y2-y1;
    if((xlen>1))
    {
        rectangle(x1,y1,x1+(xlen*2/3),y2);
        rectangle(x1+(xlen/3),y1,x1+(xlen*2/3),y2);
        rectangle(x1,y1,x2,y1+(ylen/3));
        rectangle(x1,y1+(ylen/3),x2,y1+(ylen*2/3));

        carpet(x1,y1,x1+(xlen/3),y1+(ylen/3));  
        carpet(x1,y1+(ylen/3),x1+(xlen/3),y1+(ylen*2/3));
        carpet(x1,y1+(ylen*2/3),x1+(xlen/3),y2);

        carpet(x1+(xlen/3),y1,x1+(xlen*2/3),y1+(ylen/3));
        carpet(x1+(xlen*2/3),y1,x2,y1+(ylen/3));

        carpet(x1+(xlen*2/3),y1+(ylen/3),x2,y1+(ylen*2/3));

        carpet(x1+(xlen/3),y1+(ylen*2/3),x1+(xlen*2/3),y2);
        carpet(x1+(xlen*2/3),y1+(ylen*2/3),x2,y2);
    }
    
}

int main()
{
    int gd = DETECT, gm = 0;
    initgraph(&gd,&gm,NULL);

    rectangle(50,50,450,450);
    carpet(50,50,450,450);
    getch();
    closegraph();
}