#include<graphics.h>
#include<iostream>
using namespace std;
void mid_point_circle(int xc, int yc, int r);
void find_for_all_octants_shift(int x, int y, int xc, int yc);
void emoji_1(int i);
void emoji_2(int i);
void emoji_3(int i);
void emoji_4(int i);
void emoji_5(int i);

int main()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,NULL);
   for(int i=0;i<=100;i++){
    cleardevice();
    emoji_1(i);
    emoji_2(i);
    emoji_3(i);
    emoji_4(i);
    emoji_5(i);
    delay(100);
   }
   closegraph();
   return 0;
}

void mid_point_circle(int xc, int yc, int r)
{
    int x=0, y=r;
    float pk = (5/4) - r;

    while(true)
    {
        find_for_all_octants_shift(x,y,xc,yc);
        cout<<endl;
        if(x >= y)
            break;
        if(pk < 0)
        {
            x = x + 1;
            y = y;
            pk = pk + (2*x) + 1;
        }
        else
        {
            x = x + 1;
            y = y - 1;
            pk = pk + (2*x) + 1 - (2*y);
        }
    }
}

void find_for_all_octants_shift(int x, int y, int xc, int yc)
{
    int x1,x2,x3,x4,x5,x6,x7,x8;
    int y1,y2,y3,y4,y5,y6,y7,y8;

    x1 = x + xc; y1 = y + yc;
    putpixel(x1,y1,WHITE);

    x2 = x + xc; y2 = (-1*y) + yc;
    putpixel(x2,y2,WHITE);

    x3 = y + xc; y3 = (-1*x) + yc;
    putpixel(x3,y3,WHITE);

    x4 = (-1*y) + xc; y4 = (-1*x) + yc;
    putpixel(x4,y4,WHITE);

    x5 = (-1*x) + xc; y5 = (-1*y) + yc;
    putpixel(x5,y5,WHITE);

    x6 = (-1*x) + xc; y6 = y + yc;
    putpixel(x6,y6,WHITE);

    x7 = (-1*y) + xc; y7 = x + yc;
    putpixel(x7,y7,WHITE);

    x8 = y + xc; y8 = x + yc;
    putpixel(x8,y8,WHITE);

}
void emoji_1(int i) // : )
{
    mid_point_circle(50+i,100,30);
    mid_point_circle(40+i,90,5);
    mid_point_circle(60+i,90,5);
    setcolor(BLACK);
    arc(50+i,100,180,360,20);
}

void emoji_2(int i) // :|
{
    mid_point_circle(50+i,180,30);
    mid_point_circle(40+i,170,5);
    mid_point_circle(60+i,170,5);
    mid_point_circle(50+i,190,5);
    setcolor(WHITE);

}

void emoji_3(int i) // -_-
{
    mid_point_circle(50+i,260,30);
    setcolor(WHITE);
    line(30+i,250,45+i,250);
    line(55+i,250,70+i,250);
    line(35+i,270,65+i,270);
}

void emoji_4(int i) // :')
{
    mid_point_circle(120+i,100,30);
    mid_point_circle(110+i,90,5);
    mid_point_circle(130+i,90,5);
    setcolor(WHITE);
    arc(120+i,100,20,160,20);
}

void emoji_5(int i) // B)
{
    mid_point_circle(120+i,180,30);
    mid_point_circle(110+i,170,5);
    setcolor(WHITE);
    line(125+i,170,140+i,170);
    arc(120+i,178,20,160,22);
}