#include<iostream>
#include<math.h>
#include<graphics.h>
//using namespace std;
int x,y;
int main()
{

    int gd=DETECT,gm;
    initgraph(&gd,&gm,"..\\bgi");
    getch();
    int xt=getmaxx(),ym=getmaxy(),xm=xt/2,yb=ym/2,xb=0,yt=0;
    std::cout<<xt<<" "<<ym;
    //yb=ym;
    line(0,yb,xm-310,yb);
    line(xm+310,yb,xt,yb);

    int water[8]={xm-40,yb+30,xm-100,ym-40,xm+100,ym-40,xm+40,yb+30};
    setfillstyle(WIDE_DOT_FILL,WHITE);
    fillpoly(4,water);

    line(0,ym,xm-120,yb+20);
    line(xm+120,yb+20,xt,ym);

    line(0,ym-100,xm-195,yb+20);
    line(xt,ym-100,xm+195,yb+20);

    line(0,ym-200,xm-310,yb+20);
    line(xt,ym-200,xm+310,yb+20);

    int lg[8]={0,ym-100,xm-195,yb+20,xm-120,yb+20,0,ym};
    int rg[8]={xt,ym-100,xm+195,yb+20,xm+120,yb+20,xt,ym};
    setfillstyle(CLOSE_DOT_FILL,WHITE);
    fillpoly(4,rg);
    fillpoly(4,lg);

    int ls[8]={0,ym-200,xm-310,yb+20,xm-310,yb,0,yb};
    int rs[8]={xt,ym-200,xm+310,yb+20,xm+310,yb,xt,yb};
    fillpoly(4,ls);
    fillpoly(4,rs);

    yb-=10;

    int base[16]={xm-310,yb-10,xm+310,yb-10,xm+310,yb+30,xm+40,yb+30,xm+40,yb+10,xm-40,yb+10,xm-40,yb+30,xm-310,yb+30};
    line(xm-40,yb+30,xm+40,yb+30);
    setfillstyle(EMPTY_FILL,WHITE);
    fillpoly(8,base);

    //DOOR
    rectangle(xm-40,yb-120,xm+40,yb-10);
    rectangle(xm-60,yb-160,xm+60,yb-10);
    int door[16]={xm-45,yb-10,xm-45,yb-135,xm+45,yb-135,xm+45,yb-10,xm+55,yb-10,xm+55,yb-145,xm-55,yb-145,xm-55,yb-10};
    setfillstyle(XHATCH_FILL,WHITE);
    fillpoly(8,door);
    drawpoly(8,door);

    arc(xm,yb-65,0,66,40);
    arc(xm,yb-65,114,180,40);
    line(xm-17,yb-102,xm,yb-115);
    line(xm+17,yb-102,xm,yb-115);

    arc(xm,yb-80,0,180,15);
    line(xm-15,yb-68,xm-15,yb-82);
    line(xm+14,yb-68,xm+14,yb-82);

    rectangle(xm-40,yb-64,xm+40,yb-67);

    arc(xm,yb-25,0,180,15);
    line(xm-15,yb-13,xm-15,yb-27);
    line(xm+14,yb-13,xm+14,yb-27);

    rectangle(xm-25,yb-55,xm+25,yb-10);


    //DOME
    arc(xm,yb-180,120,200,65);
    arc(xm,yb-180,340,60,65);

    ellipse(xm,yb-235,0,360,35,2);
    line(xm-30,yb-237,xm,yb-255);
    line(xm+30,yb-237,xm,yb-255);
    setlinestyle(0,0,2);
    line(xm,yb-255,xm,yb-298);
    setfillstyle(SOLID_FILL,WHITE);
    ellipse(xm,yb-255,0,360,6,2);
    fillellipse(xm,yb-262,3,3);
    fillellipse(xm,yb-273,5,5);
    fillellipse(xm,yb-283,3,3);
    line(xm,yb-290,xm-5,yb-294);
    line(xm,yb-290,xm+4,yb-294);
    setlinestyle(0,0,1);
    line(xm-65,yb-170,xm+65,yb-170);
    int db[8]={xm-60,yb-160,xm-63,yb-170,xm+63,yb-170,xm+60,yb-160};
    int dt[6]={xm-30,yb-237,xm,yb-255,xm+30,yb-237};
    setfillstyle(XHATCH_FILL,WHITE);
    fillpoly(4,db);
    setfillstyle(LTBKSLASH_FILL,WHITE);
    fillpoly(3,dt);


    //Sides
    rectangle(xm-120,yb-120,xm-60,yb-10);
    rectangle(xm+120,yb-120,xm+60,yb-10);
    rectangle(xm-115,yb-60,xm-65,yb-12);
    rectangle(xm-115,yb-113,xm-65,yb-64);
    rectangle(xm+115,yb-60,xm+65,yb-12);
    rectangle(xm+115,yb-113,xm+65,yb-64);

    int rl[8]={xm-120,yb-120,xm-120,yb-130,xm-60,yb-130,xm-60,yb-120};
    int rr[8]={xm+120,yb-120,xm+120,yb-130,xm+60,yb-130,xm+60,yb-120};


    setfillstyle(XHATCH_FILL,WHITE);
    fillpoly(4,rl);
    fillpoly(4,rr);
    int sideL[8]={xm-120,yb-120,xm-150,yb-110,xm-150,yb-120,xm-120,yb-130};
    int doorL[8]={xm-150,yb-110,xm-150,yb-10,xm-120,yb-10,xm-120,yb-120};
    int spldl[8]={xm-148,yb-13,xm-148,yb-55,xm-122,yb-57,xm-122,yb-11};
    int splul[8]={xm-148,yb-60,xm-148,yb-105,xm-122,yb-109,xm-122,yb-60};
    line(xm-148,yb-63,xm-122,yb-63);
    drawpoly(4,spldl);
    drawpoly(4,splul);



    int spldr[8]={xm+148,yb-13,xm+148,yb-55,xm+122,yb-57,xm+122,yb-11};
    int splur[8]={xm+148,yb-60,xm+148,yb-105,xm+122,yb-109,xm+122,yb-60};
    line(xm+148,yb-63,xm+122,yb-63);
    drawpoly(4,spldr);
    drawpoly(4,splur);


    int sideR[8]={xm+120,yb-120,xm+150,yb-110,xm+150,yb-120,xm+120,yb-130};
    int doorR[8]={xm+150,yb-110,xm+150,yb-10,xm+120,yb-10,xm+120,yb-120};
    fillpoly(4,sideL);
    drawpoly(4,doorL);
    fillpoly(4,sideR);
    drawpoly(4,doorR);
    line(xm-120,yb-130,xm-120,yb-150);
    line(xm+120,yb-130,xm+120,yb-150);
    line(xm-150,yb-120,xm-150,yb-140);
    line(xm+150,yb-120,xm+150,yb-140);
    line(xm-135,yb-125,xm-135,yb-155);
    line(xm+135,yb-125,xm+135,yb-155);
    //LEFT SIDE ARCS
    //BOTTOM ARCS
    line(xm-110,yb-15,xm-70,yb-15);
    line(xm-110,yb-15,xm-110,yb-40);
    line(xm-70,yb-15,xm-70,yb-40);
    //top arc
    line(xm-110,yb-67,xm-70,yb-67);
    line(xm-110,yb-67,xm-110,yb-87);
    line(xm-70,yb-67,xm-70,yb-87);

    arc(xm-90,yb-35,0,68,20);
    arc(xm-90,yb-35,112,180,20);
    arc(xm-90,yb-85,0,68,20);
    arc(xm-90,yb-85,112,180,20);
    line(xm-107,yb-96,xm-90,yb-112);
    line(xm-74,yb-96,xm-90,yb-112);
    line(xm-107,yb-45,xm-90,yb-60);
    line(xm-74,yb-45,xm-90,yb-60);

    //RIGHT SIDE ARCS
       //BOTTOM ARCS
    line(xm+110,yb-15,xm+70,yb-15);
    line(xm+110,yb-15,xm+110,yb-40);
    line(xm+70,yb-15,xm+70,yb-40);
    //top arc
    line(xm+110,yb-67,xm+70,yb-67);
    line(xm+110,yb-67,xm+110,yb-87);
    line(xm+70,yb-67,xm+70,yb-87);

    arc(xm+90,yb-35,0,68,20);
    arc(xm+90,yb-35,112,180,20);
    arc(xm+90,yb-85,0,68,20);
    arc(xm+90,yb-85,112,180,20);
    line(xm+107,yb-96,xm+90,yb-112);
    line(xm+74,yb-96,xm+90,yb-112);
    line(xm+107,yb-45,xm+90,yb-60);
    line(xm+74,yb-45,xm+90,yb-60);

    //EXTREME SIDE ARC LEFT
    line(xm-126,yb-15,xm-146,yb-15);
    line(xm-126,yb-15,xm-126,yb-45);
    line(xm-146,yb-15,xm-146,yb-40);
    //top arc
    line(xm-146,yb-67,xm-126,yb-67);
    line(xm-146,yb-67,xm-146,yb-92);
    line(xm-126,yb-67,xm-126,yb-97);

    arc(xm-135,yb-38,0,68,11);
    arc(xm-135,yb-38,112,180,11);
    arc(xm-135,yb-90,0,68,11);
    arc(xm-135,yb-90,112,180,11);
    line(xm-144,yb-97,xm-135,yb-106);
    line(xm-127,yb-97,xm-135,yb-106);
    line(xm-144,yb-45,xm-135,yb-54);
    line(xm-127,yb-45,xm-135,yb-54);

        //EXTREME SIDE ARC LEFT
    line(xm+126,yb-15,xm+146,yb-15);
    line(xm+126,yb-15,xm+126,yb-45);
    line(xm+146,yb-15,xm+146,yb-40);
    //top arc
    line(xm+146,yb-67,xm+126,yb-67);
    line(xm+146,yb-67,xm+146,yb-92);
    line(xm+126,yb-67,xm+126,yb-97);

    arc(xm+135,yb-39,0,68,11);
    arc(xm+136,yb-39,112,180,11);
    arc(xm+135,yb-91,0,68,11);
    arc(xm+136,yb-91,112,180,11);
    line(xm+144,yb-97,xm+136,yb-106);
    line(xm+129,yb-98,xm+136,yb-106);
    line(xm+144,yb-45,xm+136,yb-54);
    line(xm+129,yb-46,xm+136,yb-54);

    //THOSE THINGS ON TOP OF DOOR LEFT
    rectangle(xm-110,yb-155,xm-70,yb-130);
    rectangle(xm-115,yb-157,xm-65,yb-155);
    arc(xm-90,yb-164,120,200,22);
    arc(xm-90,yb-164,340,60,22);

    ellipse(xm-90,yb-183,0,360,10,1);
    line(xm-103,yb-183,xm-90,yb-190);
    line(xm-77,yb-183,xm-90,yb-190);

    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(xm-90,yb-192,2,2);
    fillellipse(xm-90,yb-198,3,3);
    fillellipse(xm-90,yb-204,2,2);

    int sdomel[6]={xm-77,yb-183,xm-90,yb-190,xm-103,yb-183};
    setfillstyle(LTBKSLASH_FILL,WHITE);
    fillpoly(3,sdomel);

    line(xm-95,yb-130,xm-95,yb-145);
    line(xm-85,yb-130,xm-85,yb-145);
    arc(xm-90,yb-143,0,180,5);


    line(xm-108,yb-130,xm-108,yb-141);
    line(xm-100,yb-130,xm-100,yb-143);
    arc(xm-104,yb-141,0,200,4);

    line(xm-80,yb-130,xm-80,yb-143);
    line(xm-72,yb-130,xm-72,yb-141);
    arc(xm-76,yb-141,340,200,4);


      //THOSE THINGS ON TOP OF DOOR RIGHT
    rectangle(xm+110,yb-155,xm+70,yb-130);
    rectangle(xm+115,yb-157,xm+65,yb-155);
    arc(xm+90,yb-164,120,200,22);
    arc(xm+90,yb-164,340,60,22);

    ellipse(xm+90,yb-183,0,360,10,1);
    line(xm+103,yb-183,xm+90,yb-190);
    line(xm+77,yb-183,xm+90,yb-190);

    setfillstyle(SOLID_FILL,WHITE);
    fillellipse(xm+90,yb-192,2,2);
    fillellipse(xm+90,yb-198,3,3);
    fillellipse(xm+90,yb-204,2,2);

    int sdomer[6]={xm+77,yb-183,xm+90,yb-190,xm+103,yb-183};
    setfillstyle(LTBKSLASH_FILL,WHITE);
    fillpoly(3,sdomer);

    line(xm+95,yb-130,xm+95,yb-145);
    line(xm+85,yb-130,xm+85,yb-145);
    arc(xm+90,yb-143,0,180,5);

    line(xm+108,yb-130,xm+108,yb-141);
    line(xm+100,yb-130,xm+100,yb-143);
    arc(xm+104,yb-141,0,200,4);

    line(xm+80,yb-130,xm+80,yb-143);
    line(xm+72,yb-130,xm+72,yb-141);
    arc(xm+76,yb-141,340,200,4);


    //TOWER 1 EXTLEFT
    int tbl[8]={xm-305,yb-10,xm-300,yb-65,xm-260,yb-65,xm-255,yb-10};
    int tml[8]={xm-300,yb-70,xm-295,yb-135,xm-265,yb-135,xm-260,yb-65};
    int ttl[8]={xm-295,yb-137,xm-290,yb-197,xm-270,yb-197,xm-265,yb-137};
    setfillstyle(LTSLASH_FILL,WHITE);
    fillellipse(xm-280,yb-67,27,3);
    fillellipse(xm-280,yb-137,18,3);
    fillellipse(xm-280,yb-197,12,3);


    rectangle(xm-289,yb-219,xm-271,yb-200);
    line(xm-283,yb-200,xm-283,yb-213);
    line(xm-277,yb-200,xm-277,yb-213);
    arc(xm-280,yb-211,0,190,3);
    arc(xm-285,yb-211,0,190,3);
    arc(xm-275,yb-211,0,190,3);
    setfillstyle(LTBKSLASH_FILL,WHITE);
    fillellipse(xm-280,yb-218,13,3);
    arc(xm-280,yb-221,350,190,10);
    circle(xm-280,yb-232,1);
    circle(xm-280,yb-235,2);
    circle(xm-280,yb-237,1);


    fillpoly(4,tbl);
    fillpoly(4,tml);
    fillpoly(4,ttl);
    drawpoly(4,tbl);
    drawpoly(4,tml);
    drawpoly(4,ttl);





    //TOWER 1 EXTRIGHT
    int tbr[8]={xm+305,yb-10,xm+300,yb-65,xm+260,yb-65,xm+255,yb-10};
    int tmr[8]={xm+300,yb-70,xm+295,yb-135,xm+265,yb-135,xm+260,yb-65};
    int ttr[8]={xm+295,yb-137,xm+290,yb-197,xm+270,yb-197,xm+265,yb-137};
    setfillstyle(LTSLASH_FILL,WHITE);
    fillellipse(xm+280,yb-67,27,3);
    fillellipse(xm+280,yb-137,18,3);
    fillellipse(xm+280,yb-197,12,3);


    rectangle(xm+289,yb-219,xm+271,yb-200);
    line(xm+283,yb-200,xm+283,yb-213);
    line(xm+277,yb-200,xm+277,yb-213);
    arc(xm+280,yb-211,0,190,3);
    arc(xm+285,yb-211,0,190,3);
    arc(xm+275,yb-211,0,190,3);
    setfillstyle(LTBKSLASH_FILL,WHITE);
    fillellipse(xm+280,yb-218,13,2);
    arc(xm+280,yb-221,350,190,10);
    circle(xm+280,yb-232,1);
    circle(xm+280,yb-235,2);
    circle(xm+280,yb-237,1);

    fillpoly(4,tbr);
    fillpoly(4,tmr);
    fillpoly(4,ttr);
    drawpoly(4,tbr);
    drawpoly(4,tmr);
    drawpoly(4,ttr);

    //TOWER FARAWAY LEFT
    int stbl[8]={xm-192,yb-10,xm-189,yb-48,xm-163,yb-48,xm-160,yb-10};
    int stml[8]={xm-189,yb-50,xm-186,yb-88,xm-166,yb-88,xm-163,yb-50};
    int sttl[8]={xm-186,yb-90,xm-183,yb-128,xm-169,yb-128,xm-166,yb-84};
    fillellipse(xm-176,yb-50,18,2);
    fillellipse(xm-176,yb-88,15,2);
    fillellipse(xm-176,yb-128,11,2);

    fillpoly(4,stbl);
    fillpoly(4,stml);
    fillpoly(4,sttl);
    drawpoly(4,stbl);
    drawpoly(4,stml);
    drawpoly(4,sttl);


    rectangle(xm-184,yb-145,xm-169,yb-131);
    line(xm-180,yb-131,xm-180,yb-139);
    line(xm-173,yb-131,xm-173,yb-139);
    arc(xm-176,yb-138,340,200,4);
    arc(xm-182,yb-138,340,90,2);
    arc(xm-170,yb-138,90,200,2);

    fillellipse(xm-176,yb-146,10,2);
    arc(xm-176,yb-148,350,190,7);
    setlinestyle(1,0,1);
    line(xm-176,yb-156,xm-176,yb-160);
    setlinestyle(0,0,1);
    circle(xm-176,yb-159,2);



    //TOWER FARAWAY RIGHT
    int stbr[8]={xm+192,yb-10,xm+189,yb-48,xm+163,yb-48,xm+160,yb-10};
    int stmr[8]={xm+189,yb-50,xm+186,yb-88,xm+166,yb-88,xm+163,yb-50};
    int sttr[8]={xm+186,yb-90,xm+183,yb-128,xm+169,yb-128,xm+166,yb-84};
    fillellipse(xm+176,yb-50,18,2);
    fillellipse(xm+176,yb-88,15,2);
    fillellipse(xm+176,yb-128,11,2);

    fillpoly(4,stbr);
    fillpoly(4,stmr);
    fillpoly(4,sttr);
    drawpoly(4,stbr);
    drawpoly(4,stmr);
    drawpoly(4,sttr);


    rectangle(xm+184,yb-145,xm+169,yb-131);
    line(xm+180,yb-131,xm+180,yb-139);
    line(xm+173,yb-131,xm+173,yb-139);
    arc(xm+176,yb-138,340,200,4);
    arc(xm+182,yb-138,0,140,2);
    arc(xm+170,yb-138,0,90,2);

    fillellipse(xm+177,yb-146,10,2);
    arc(xm+177,yb-148,350,190,7);
    setlinestyle(1,0,1);
    line(xm+177,yb-156,xm+177,yb-160);
    setlinestyle(0,0,1);
    circle(xm+177,yb-159,2);


    //stars
    for(int i=0;i<400;i++)
    {
        x=rand()%xt;
        y=rand()%(yb-125);
        if(((x<xm+80)&&(y>yb-255))&&((x>xm-80)&&(y>yb-255)))
        {
            i--;
            continue;
        }
        putpixel(x,y,WHITE);
    }
    for(int i =0;i<200;i++)
    {
        x=rand()%xm-140;
        y=rand()%(yb-10);
        putpixel(x,y,WHITE);
    }
    for(int i =0;i<225;i++)
    {
        x=rand()%xm+160+xm;
        y=rand()%(yb-10);
        putpixel(x,y,WHITE);
    }


    getch();
    closegraph();
    return 0;
}
