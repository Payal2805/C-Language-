#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
int main()
{
     int d=0,m;
     initgraph(&d,&m,"c:\\TURBOC3\\BGI");
     for(int x=0;x<650;x++)
     {
     cleardevice();
     // road
     line(10,401,630,401);     // line(int x1,int y1,int x2,int y2)

     //wheels
     circle(40+x,370,30);     // circle(int x,int y,int radius)
     circle(150+x,370,30);

     line(40+x,370,100+x,370);
     line(40+x,370,60+x,340);
     line(100+x,370,120+x,340);
     line(120+x,340,60+x,340);
     line(60+x,340,60+x,335);
     line(55+x,335,65+x,335);

     line(150+x,370,100+x,320);
     line(100+x,320,90+x,320);
     delay(10);
     }

     return 0;
     getch();
}