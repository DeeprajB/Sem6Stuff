#include<graphics.h>
int main(){
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
circle(100,100,30);
delay(100);
closegraph();
}