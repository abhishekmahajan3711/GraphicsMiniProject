#include<iostream>
#include<graphics.h>
#include<conio.h>
#include<iomanip>
using namespace std;

class AA
{
  public:

void building_draw()
{
   delay(1500);
   setcolor(RED);
   delay(800);
   rectangle(250,300,360,400);
   delay(800);
   setcolor(YELLOW);
   rectangle(420,260,450,400);
   delay(800);
   rectangle(150,260,180,400);
   setcolor(YELLOW);
   delay(800);
   rectangle(150,200,450,260);
   setcolor(WHITE);
   delay(800);
   rectangle(100,100,500,200);
   setcolor(WHITE);
   delay(800);
   rectangle(100,100,500,400);
   delay(800);
   setcolor(BLACK);
   line(250,400,360,400);
   delay(1000);
}

void moving_bubbles()
{
   for(int i=0;i<150;i++)
   {
     setcolor(YELLOW);
     delay(15);
    circle(250,250,0+i);
   }

   for(int i=0;i<30;i++)
   {
     setcolor(BLACK);
     delay(25);
    circle(200,200,0+i);
   }

   for(int i=0;i<30;i++)
   {
     setcolor(BLACK);
    delay(25);
    circle(300,200,0+i);
   }
   
   for(int i=0;i<100;i++)
   {setcolor(BLACK);
    delay(10);
    line(200,340,200+i,340);
   }

   
   for(int i=0;i<100;i++)
   {setcolor(BLACK);
    delay(10);
    line(200,339,200+i,339);
   }
   
   for(int i=0;i<100;i++)
   {setcolor(BLACK);
    delay(10);
    line(200,338,200+i,338);
   }

   

    line(200,340,180,300);
    line(199,339,179,299);
    line(198,338,178,298);
    delay(500);
    line(300,340,320,300);
    line(299,339,319,299);
    line(298,338,318,298);
    setcolor(RED);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
    delay(100);
    outtext("Always keep smiling !!");
    delay(300);
    outtext("Thank you"); 
}
};
int main()
{
    int gd=DETECT, gm;
    initgraph(&gd,&gm,(char*)"");
    setbkcolor(GREEN);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
    outtext("Constructing D.Y.Patil College of Engineering _ _ _ ");
    AA a;
    a.building_draw();
    cleardevice();
    delay(1500);
    setcolor(WHITE);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
    outtext("Construction completed !!!");
    delay(600);
    settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 2);
    outtext("\nPress any key");
    getch();
    setcolor(WHITE);
    cleardevice();
    a.moving_bubbles();
    getch();
    closegraph();
    return 0;
}