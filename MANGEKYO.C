#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main(){
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
printf("\n\n\n\n\n\n\n MANGEKYOU SHARINGAN");
delay(1000);
setcolor(RED);
circle(300,250,140);
delay(1000);
circle(300,250,20);
delay(1000);
arc(300,250,-17,100,100);
arc(320,250,-21,90,75);
line(285,148,265,240);
line(265,240,225,285);
line(300,280,225,315);
arc(300,250,102,205,78);
arc(285,250,91,230,85);
line(300,280,358,302);
line(333,248,407,282);
arc(300,250,222,320,76);
arc(315,250,216,344,95);
line(335,248,322,176);
setfillstyle(SOLID_FILL,BLACK);
floodfill(270,230,BLACK);
setfillstyle(SOLID_FILL,RED);
floodfill(300,250,RED);
floodfill(300,112,RED);
floodfill(250,215,RED);
floodfill(300,300,RED);
floodfill(350,215,RED);
getch();
closegraph();
}