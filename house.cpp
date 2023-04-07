#include <graphics.h>

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    // For N
    line(50,50,50,80);
    line(50,50,70,80);
    line(70,50,70,80);
   //For U
    line(85,50,85,80);
    line(85,80,100,80);
    line(100,50,100,80);

    //For R
    line(110,50,110,80);
    line(110,50,125,50);
    line(125,50,125,65);
    line(125,65,110,65);
    line(110,65,125,80);

    //For E
    line(135,50,135,80);
    line(135,50,150,50);
    line(135,65,150,65);
    line(135,80,150,80);

    //For A
    line(190,50,180,80);
    line(185,65,195,65);
    line(190,50,200,80);

    //For L
    line(210,50,210,80);
    line(210,80,225,80);

    //For A
    line(245,50,235,80);
    line(245,50,255,80);
    line(240,65,250,65);

    //For M
    line(265,50,265,80);
    line(265,50,275,65);
    line(275,65,285,50);
    line(285,50,285,80);


    //For R
    line(310,50,310,80);
    line(310,50,325,50);
    line(325,50,325,65);
    line(325,65,310,65);
    line(310,65,325,80);

    //For U
    line(340,50,340,80);
    line(340,80,355,80);
    line(355,50,355,80);

    //For P
    line(370,50,370,80);
    line(370,50,385,50);
    line(385,50,385,65);
    line(385,65,370,65);

    //For C
    line(50,120,50,150);
    line(50,120,65,120);
    line(50,150,65,150);

    //For S
    line(80,120,95,120);
    line(80,120,80,135);
    line(80,135,95,135);
    line(95,135,95,150);
    line(80,150,95,150);

    //For E
    line(110,120,110,150);
    line(110,120,125,120);
    line(110,135,125,135);
    line(110,150,125,150);

    //For 2
    line(140,120,155,120);
    line(155,120,155,135);
    line(155,135,140,135);
    line(140,135,140,150);
    line(140,150,155,150);

    //For 0
    line(170,120,170,150);
    line(170,120,185,120);
    line(185,120,185,150);
    line(170,150,185,150);

    //For 0
    line(200,120,200,150);
    line(200,120,215,120);
    line(215,120,215,150);
    line(200,150,215,150);


    //For 1
    line(230,120,230,150);

    //For 0
    line(245,120,245,150);
    line(245,120,260,120);
    line(260,120,260,150);
    line(245,150,260,150);

    //For 1
    line(275,120,275,150);

    //for 9
    line(290,120,290,135);
    line(290,120,305,120);
    line(305,120,305,150);
    line(290,135,305,135);

    //For 2
    line(320,120,335,120);
    line(335,120,335,135);
    line(335,135,320,135);
    line(320,135,320,150);
    line(320,150,335,150);

    //For 3
    line(350,120,365,120);
    line(350,135,365,135);
    line(350,150,365,150);
    line(365,120,365,150);

    //For 1
    line(380,120,380,150);

   //For HOUSE
   setcolor(CYAN);
   setfillstyle(SOLID_FILL,CYAN);
    rectangle(80,270,300,380);
    floodfill(81,271,CYAN);


    //For DOOR
    setcolor(WHITE);
    setfillstyle(SLASH_FILL,WHITE);
    rectangle(95,320,125,380);
    floodfill(110,350,WHITE);

    //For WINDOW
  setcolor(BROWN);
  setfillstyle(SOLID_FILL,BROWN);
    rectangle(190,320,250,350);
    floodfill(191,321,BROWN);

    //FOR SHED
    setcolor(CYAN);
    line(300,270,270,200);
    line(110,200,270,200);

    setcolor(CYAN);
    setfillstyle(HATCH_FILL,CYAN);
    line(80,270,110,200);
    line(110,200,140,270);
    floodfill(110,235,CYAN);
    setcolor(BLACK);
    line(140,270,140,380);




    setcolor(WHITE);
    setfillstyle(SOLID_FILL,WHITE);
    rectangle(70,380,140,390);
    floodfill(71,381,WHITE);
    rectangle(140,380,310,390);
    floodfill(141,381,WHITE);


    /* for (int i=625;i>=-100; i--){
    outtextxy(i,400,"HOUSE");
    delay(30);
}*/



     getch();
    closegraph();
    return 0;


    }
