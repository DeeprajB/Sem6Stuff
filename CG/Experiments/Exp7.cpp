#include<stdio.h>
#include<graphics.h>

void midPtEllipseAlgo(long x_center,long y_center,long a,long b);

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);
    
    midPtEllipseAlgo(250,230,35,25);
    midPtEllipseAlgo(250,230,60,30);
    midPtEllipseAlgo(250,230,90,60);
    midPtEllipseAlgo(250,230,120,90);
    midPtEllipseAlgo(250,230,150,120);
    midPtEllipseAlgo(250,230,180,150);
    midPtEllipseAlgo(250,230,210,180);
    midPtEllipseAlgo(250,230,240,210);


    for(int i=0;i<12;i++)
    {
    //sun
    //setfillstyle(SOLID_FILL,YELLOW);
    setcolor(YELLOW);
    circle(250,230,20);
    floodfill(250,230,15);
    //mercury
    //setfillstyle(SOLID_FILL,RED);
    setcolor(RED);
    circle(285,230,2);
    floodfill(285,230,15);
    delay(100);
    //venus
    //setfillstyle(SOLID_FILL,LIGHTRED);
    setcolor(LIGHTRED);
    circle(310,230,5);
    floodfill(310,230,15);
    //earth
    //setfillstyle(SOLID_FILL,BLUE);
    setcolor(BLUE);
    circle(340,230,7);
    floodfill(340,230,15);
    //mars
    //setfillstyle(SOLID_FILL,LIGHTRED);
    setcolor(LIGHTRED);
    circle(370,230,4);
    floodfill(370,230,15);
    //jupiter
    //setfillstyle(SOLID_FILL,MAGENTA);
    setcolor(MAGENTA);
    circle(400,230,12);
    floodfill(400,230,15);
    //SATURN
    //setfillstyle(SOLID_FILL,BROWN);
    setcolor(BROWN);
    circle(430,230,11);
    floodfill(430,230,15);
    //uranus
    //setfillstyle(SOLID_FILL,LIGHTBLUE);
    setcolor(LIGHTBLUE);
    circle(460,230,9);
    floodfill(460,230,15);
    //neptune
    //setfillstyle(SOLID_FILL,WHITE);
    setcolor(WHITE);
    circle(490,230,8);
    floodfill(490,230,15);
    }
    getch();
   closegraph();
}

void midPtEllipseAlgo(long x_center,long y_center,long a,long b)
{
    long x,y,a_sqr,b_sqr, fx,fy, d,tmp1,tmp2;
    x=0;
    y=b;
    a_sqr=a*a;
    b_sqr=b*b;
    fx=2*b_sqr*x;
    fy=2*a_sqr*y;
  d=b_sqr-(a_sqr*b)+(a_sqr*0.25);
  do
   {
  putpixel(x_center+x,y_center+y,WHITE);
  putpixel(x_center-x,y_center-y,WHITE);
  putpixel(x_center+x,y_center-y,WHITE);
  putpixel(x_center-x,y_center+y,WHITE);

   if(d<0)
    {
  d=d+fx+b_sqr;
    }
   else
  {
  y=y-1;
  d=d+fx+-fy+b_sqr;
  fy=fy-(2*a_sqr);
  }
  x=x+1;
  fx=fx+(2*b_sqr);
  delay(10);

   }
   while(fx<fy);
   tmp1=(x+0.5)*(x+0.5);
   tmp2=(y-1)*(y-1);
   d=b_sqr*tmp1+a_sqr*tmp2-(a_sqr*b_sqr);
   do
   {
  putpixel(x_center+x,y_center+y,WHITE);
  putpixel(x_center-x,y_center-y,WHITE);
  putpixel(x_center+x,y_center-y,WHITE);
  putpixel(x_center-x,y_center+y,WHITE);

   if(d>=0)
  d=d-fy+a_sqr;
   else

  {
  x=x+1;
  d=d+fx-fy+a_sqr;
  fx=fx+(2*b_sqr);
  }
   y=y-1;
   fy=fy-(2*a_sqr);
   }
   while(y>0);

}