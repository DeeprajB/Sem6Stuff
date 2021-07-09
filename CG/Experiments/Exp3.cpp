
//void setfillstyle(int pattern, int color);
#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
int gd=DETECT,gm;

initgraph(&gd,&gm,NULL);
int r=1;


while (r<=50){

//Mountains
setcolor(BROWN);
line(0,200,1000,200);
line(0,200,125,100);
line(125,100,250,200);
line(250,200,375,100);
line(375,100,500,200);
line(500,200,625,100);
line(625,100,750,200);
setcolor(BROWN);
floodfill(50,190,WHITE);
floodfill(270,190,WHITE);
floodfill(525,190,WHITE);

//Mountain Reflection
line(0,200,125,300);
line(125,300,250,200);
line(250,200,375,300);
line(375,300,500,200);
line(500,200,625,300);
line(625,300,750,200);
floodfill(50,210,WHITE);
floodfill(270,210,WHITE);
floodfill(525,210,WHITE);
 






//Animated Sun between a mountain
setcolor(RED);
arc(250,200,220,320,r);
arc(250,200,40,140,r);
 //floodfill(250,201,WHITE);
 
//Water
 setcolor(BLUE);
 line(0,300,1000,300);
 floodfill(50,250,BROWN);
 floodfill(300,250,BROWN);
 floodfill(550,250,BROWN);

 //Grass 
 setcolor(GREEN);
 line(0,400,1000,400);
 floodfill(50,350,BLUE);

if (r>10){
    setcolor(LIGHTCYAN);
    line(0,0,1000,0);
    line(0,0,0,200);
    line(1000,0,1000,200);
    line(0,200,1000,200);
    line(0,200,125,100);
    line(125,100,250,200);
    line(250,200,375,100);
    line(375,100,500,200);
    line(500,200,625,100);
    line(625,100,750,200);
    floodfill(10,10,GREEN);
}
 

r+=2;
delay(100);
}





delay(1500);
closegraph();
cout<<"Experiment 3"<<endl;
}

