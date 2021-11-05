#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
	int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   int XZero, YZero, XMin, YMin, XMax, YMax;
   XZero=400, YZero=300;
   XMin=0, YMin=0;
   XMax=800, YMax=600;

    line(XMin,YZero,XMax,YZero);
    line(XZero,YMin,XZero,YMax);

    int VF;
    cout<<"Speed of Fighter: ";
    cin>>VF;
    delay(3000);

    int Time[100], XB[100], YB[100];
    freopen("aircraft_simulation_input.txt","r",stdin);
    int i, num;
    string s;

    i=0;
    getline(std::cin, s);
    stringstream strt(s);
    while(strt >> num){
        Time[i]=num;
        i++;
    }

    i=0;
    getline(std::cin, s);
    stringstream strx(s);
    while(strx >> num){
        XB[Time[i]]=num;
        i++;
    }

    i=0;
    getline(std::cin, s);
    stringstream stry(s);
    while(stry >> num){
        YB[Time[i]]=num;
        i++;
    }

    int TopTime;
    i=i-1;
    TopTime=i;

    int Distance;
    Distance=TopTime*VF;

    int XF[100], YF[100];
    if(XB[0]<XB[TopTime] && abs(XB[TopTime]-XB[0])>abs(YB[TopTime]-YB[0])){
        XF[0]=XB[0]+Distance;
        YF[0]=0;
    }
    else if(XB[0]>XB[TopTime] && abs(XB[TopTime]-XB[0])>abs(YB[TopTime]-YB[0])){
        XF[0]=XB[0]-Distance;
        YF[0]=0;
    }
    else if(YB[0]<YB[TopTime] && abs(XB[TopTime]-XB[0])<abs(YB[TopTime]-YB[0])){
        YF[0]=YB[0]+Distance;
        XF[0]=0;
    }
    else{
        YF[0]=YB[0]-Distance;
        XF[0]=0;
    }

    putpixel( XB[Time[0]]+XZero , YB[Time[0]]+YZero , RED );
    setfillstyle(SOLID_FILL, RED);
    circle(XB[Time[0]]+XZero , YB[Time[0]]+YZero, 3);
    floodfill(XB[Time[0]]+XZero , YB[Time[0]]+YZero, WHITE);
    delay(500);

    putpixel( XF[Time[0]]+XZero , YF[Time[0]]+YZero , BLUE );
    setfillstyle(SOLID_FILL, BLUE);
    circle(XF[Time[0]]+XZero , YF[Time[0]]+YZero, 3);
    floodfill(XF[Time[0]]+XZero , YF[Time[0]]+YZero, WHITE);
    delay(1000);

    int CurrentDistance, Step, XDifference, YDifference;
    for(i=1;i<=TopTime;i++){
        XDifference=XF[Time[i-1]]-XB[Time[i]];                                  //Finding Fighter's Next Position
        YDifference=YF[Time[i-1]]-YB[Time[i]];
        CurrentDistance=sqrt(pow(XDifference,2)+pow(YDifference,2));
        Step=CurrentDistance/VF;
        if(Step==0)Step=1;
        if(XB[0]>XF[0])
            XF[Time[i]]=XF[Time[i-1]]+XDifference/Step;
        else
            XF[Time[i]]=XF[Time[i-1]]-XDifference/Step;
        if(YB[0]>YF[0])
            YF[Time[i]]=YF[Time[i-1]]+YDifference/Step;
        else
            YF[Time[i]]=YF[Time[i-1]]-YDifference/Step;


        putpixel( XB[Time[i]]+XZero , YB[Time[i]]+YZero , RED );
        setfillstyle(SOLID_FILL, RED);
        circle(XB[Time[i]]+XZero , YB[Time[i]]+YZero, 3);
        floodfill(XB[Time[i]]+XZero , YB[Time[i]]+YZero, WHITE);
        delay(500);

        putpixel( XF[Time[i]]+XZero , YF[Time[i]]+YZero , BLUE );
        setfillstyle(SOLID_FILL, BLUE);
        circle(XF[Time[i]]+XZero , YF[Time[i]]+YZero, 3);
        floodfill(XF[Time[i]]+XZero , YF[Time[i]]+YZero, WHITE);
        delay(1000);
    }

    getch();
	closegraph();
    return 0;
}
