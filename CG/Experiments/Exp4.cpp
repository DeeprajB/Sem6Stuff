// Using DDA algorithm draw a house

#include<graphics.h>
#include<iostream>
#include<cmath>
using namespace std;

void positiveLeftToRight(int x1, int y1, int x2, int y2, float m);
void positiveRightToLeft(int x1, int y1, int x2, int y2, float m);
void negativeLeftToRight(int x1, int y1, int x2, int y2, float m);
void negativeRightToLeft(int x1, int y1, int x2, int y2, float m);
void DDA(int x1, int y1, int x2, int y2);

int main(){
    int gd=DETECT,gm;
    initgraph(&gd,&gm,NULL);

    DDA(40,205,120,100);
    DDA(120,100,200,205); 
    DDA(40,205,200,205);


    DDA(50,205,50,300);
    DDA(190,205,190,300); 
    DDA(50,300,190,300);


    DDA(100,260,100,300);   
    DDA(100,260,125,260);   
    DDA(125,260,125,300);   

    DDA(135,120,300,120);
    DDA(300,120,350,200);
    DDA(200,200,350,200);

    DDA(350,200,350,300);
    DDA(190,300,350,300);


    DDA(240,230,300,230);
    DDA(240,230,240,270);
    DDA(240,270,300,270);
    DDA(300,230,300,270);
    DDA(270,230,270,270);
    DDA(240,250,300,250);


    delay(100000);
    closegraph();
    return 0;
}

void DDA(int x1, int y1, int x2, int y2){
float m;
m = float(y2 - y1)/float(x2 - x1);
if((m > 0.0) && (x1 < x2))
    positiveLeftToRight(x1,y1,x2,y2,m);
else if((m > 0.0) && (x1 > x2))
    positiveRightToLeft(x1,y1,x2,y2,m);
else if(((1/m)==0) && (y1 < y2))
    positiveLeftToRight(x1,y1,x2,y2,m);
else if(((1/m)==0) && (y1 > y2))
    negativeLeftToRight(x1,y1,x2,y2,m);
else if((m < 0.0) && (x1 < x2))
    negativeLeftToRight(x1,y1,x2,y2,m);
else if((m < 0.0) && (x1 > x2))
    negativeRightToLeft(x1,y1,x2,y2,m);
else if((m == 0) && (x1 < x2))
    positiveLeftToRight(x1,y1,x2,y2,m);
else if((m == 0) && (x1 > x2))
    positiveRightToLeft(x1,y1,x2,y2,m);

}

void positiveLeftToRight(int x1, int y1, int x2, int y2, float m){
float X = x1, Y = y1;
int plotX = x1, plotY = y1;
if(m <= 1){
    while(plotX <= x2){
            putpixel(plotX,plotY,WHITE);
            X = X + 1;
            Y = Y + m;
            plotX = X;
            plotY = round(Y);

    }
}
else if (m > 1){
    while(plotY <= y2){
            putpixel(plotX,plotY,WHITE);
            X = X + (1/m);
            Y = Y + 1;
            plotX = round(X);
            plotY = Y;

    }
}
}

void positiveRightToLeft(int x1, int y1, int x2, int y2, float m){
float X = x1, Y = y1;
int plotX = x1, plotY = y1;
if(m <= 1){
    while(plotX >= x2){
            putpixel(plotX,plotY,WHITE);
            X = X - 1;
            Y = Y - m;
            plotX = X;
            plotY = round(Y);

    }
}
else if (m > 1){
    while(plotY >= y2){
            putpixel(plotX,plotY,WHITE);
            X = X - (1/m);
            Y = Y - 1;
            plotX = round(X);
            plotY = Y;

    }
}
}

void negativeLeftToRight(int x1, int y1, int x2, int y2, float m){
float X = x1, Y = y1;
int plotX = x1, plotY = y1;
if(abs(m) <= 1){
    while(plotX <= x2){
            putpixel(plotX,plotY,WHITE);
            X = X + 1;
            Y = Y + m;
            plotX = X;
            plotY = round(Y);

    }
}
else if (abs(m) > 1){
    while(plotY >= y2){
            putpixel(plotX,plotY,WHITE);
            X = X - (1/m);
            Y = Y - 1;
            plotX = round(X);
            plotY = Y;

    }
}
}

void negativeRightToLeft(int x1, int y1, int x2, int y2, float m){
float X = x1, Y = y1;
int plotX = x1, plotY = y1;
if(abs(m) <= 1){
    while(plotX >= x2){
            putpixel(plotX,plotY,WHITE);
            X = X - 1;
            Y = Y - m;
            plotX = X;
            plotY = round(Y);

    }
}
else if (abs(m) > 1){
    while(plotY <= y2){
            putpixel(plotX,plotY,WHITE);
            X = X + (1/m);
            Y = Y + 1;
            plotX = round(X);
            plotY = Y;

    }
}

}