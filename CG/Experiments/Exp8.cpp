#include <stdlib.h>
#include<graphics.h>
#include <math.h>
#include<iostream>
using namespace std;
void floodFill(int xi,int yi, int interiorColor, int fillColor){
if(getpixel(xi,yi)==interiorColor){
putpixel(xi,yi,fillColor);
floodFill(xi+1,yi,interiorColor,fillColor);
floodFill(xi-1,yi,interiorColor,fillColor);
floodFill(xi,yi+1,interiorColor,fillColor);
floodFill(xi,yi-1,interiorColor,fillColor);
}
}
void boundaryFill(int xi, int yi, int borderColor, int fillColor){
int color=getpixel(xi,yi);
if(color!=borderColor && color!=fillColor){
putpixel(xi,yi,fillColor);
boundaryFill(xi+1,yi,borderColor,fillColor);
boundaryFill(xi-1,yi,borderColor,fillColor);
boundaryFill(xi,yi+1,borderColor,fillColor);
boundaryFill(xi,yi-1,borderColor,fillColor);
}
}
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,NULL);
setcolor(BLACK);
int x=100,y=100;
// Boat params
int slope=60,length=200,total=slope+length;
for(int i=0;i<5;i++){
setbkcolor(WHITE);
int boat[]={x,y, x+slope,y+slope, x+length,y+slope, x+total,y, x,y
};
drawpoly(5,boat);
floodFill(x+3,y+1,WHITE,BROWN);
//boundaryFill(x+3,y+1,BLACK,BROWN);
x+=15;
delay(500);
}
closegraph();
}