#include<graphics.h>
#include<iostream>
using namespace std;
int main()
{
int gd=DETECT,gm;

initgraph(&gd,&gm,NULL);


line(10,10,10,100);
delay(500);
ellipse(10,55,270,90,45,45);
delay(500);


line(75,10,75,100);
delay(500);
line(75,10,120,10);
delay(500);
line(75,55,120,55);
delay(500);
line(75,100,120,100);
delay(500);

line(140,10,140,100);
delay(500);
line(140,10,185,10);
delay(500);
line(140,55,185,55);
delay(500);
line(140,100,185,100);
delay(500);

line(205,10,205,100);
delay(500);
ellipse(205,40,270,90,30,30);
delay(500);

line(255,10,255,100);
delay(500);
ellipse(255,40,270,90,30,30);
delay(500);
line(255,70,285,100);
delay(500);

line(305,100,327.5,10);
delay(500);
line(350,100,327.5,10);
delay(500);
line(316.25,55,338.75,55);
delay(500);

line(370,10,415,10);
delay(500);
line(392.5,10,392.5,100);
delay(500);
line(392.5,100,370,100);
delay(500);
line(370,100,370,90);
delay(500);


line(10,200,302.5,200);
delay(500);

line(55,200,55,220);
delay(500);
line(55,220,32.5,220);
delay(500);
line(32.5,220,32.5,280);
delay(500);
line(32.5,280,70,280);
delay(500);
line(70,280,70,260);
delay(500);
line(70,260,55,260);
delay(500);
line(55,260,55,300);
delay(500);
line(55,200,55,180);
delay(500);
line(55,180,80,180);
delay(500);
line(80,180,80,300);
delay(500);

line(100,200,100,250);
delay(500);
line(100,250,130,250);
delay(500);
line(130,200,130,300);
delay(500);

line(180,200,180,250);
delay(500);
line(180,250,150,250);
delay(500);
line(150,250,180,300);
delay(500);

line(200,200,200,300);
delay(500);

line(220,250,220,300);
delay(500);
line(220,300,245,300);
delay(500);
line(245,300,245,250);
delay(500);
line(245,250,270,250);
delay(500);
line(270,200,270,300);


delay(10000);
closegraph();
cout<<"Experiment 2"<<endl;
}

