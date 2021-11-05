#include<bits/stdc++.h>
#include<conio.h>
#include<graphics.h>
#include <fstream>
#include <sstream>
using namespace std;

int main(){
	int gd = DETECT, gm;
   initgraph(&gd, &gm, "");

   double XZero, YZero, XMin, YMin, XMax, YMax;
   XZero=100, YZero=400;
   XMin=0, YMin=0;
   XMax=800, YMax=600;

    line(XMin,YZero,XMax,YZero);
    line(XZero,YMin,XZero,YMax);

    double AQuantity, BQuantity, CQuantity;
Reactants:
    cout<<"Quantity of A: ";
    cin>>AQuantity;
    cout<<"Quantity of B: ";
    cin>>BQuantity;
    if(AQuantity!=BQuantity){
            cout<<"Reaction Error! A & B should be of same amount.";
            goto Reactants;
    }
    CQuantity=0;

    double K1, K2, dt;
    cout<<"Reaction Constants (K1, K2): ";
    cin>>K1>>K2;
    dt = 0.01;
    delay(3000);

    int j=0, TopTime=300;
    double Time[TopTime], i;
    for(i=0;i<TopTime;i=i+dt){
        Time[j]=i;
        j++;
    }

    putpixel(Time[0]+XZero , YZero-AQuantity , BLUE );
    setfillstyle(SOLID_FILL, BLUE);
    circle(Time[0]+XZero , YZero-AQuantity, 3);
    floodfill(Time[0]+XZero , YZero-AQuantity, WHITE);
    delay(500);

    putpixel(Time[0]+XZero , YZero-CQuantity , RED );
    setfillstyle(SOLID_FILL, RED);
    circle(Time[0]+XZero , YZero-CQuantity, 3);
    floodfill(Time[0]+XZero , YZero-CQuantity, WHITE);
    delay(1000);

    double ABChange, CChange, Equilibrium;
    Equilibrium=0;
    for(i=0, j=0;i<TopTime;i=i+dt, j++){
        ABChange=(K2*CQuantity-K1*AQuantity*BQuantity)*dt;
        CChange=(2*K1*AQuantity*BQuantity-2*K2*CQuantity)*dt;
        AQuantity=AQuantity+ABChange;
        BQuantity=BQuantity+ABChange;
        CQuantity=CQuantity+CChange;
        if(CChange==0 && Equilibrium==0){
                cout<<"The Reaction is in Equilibrium!"<<endl;
                Equilibrium=1;
        }

        putpixel(Time[j]+XZero , YZero-AQuantity , BLUE );
        setfillstyle(SOLID_FILL, BLUE);
        circle(Time[j]+XZero , YZero-AQuantity, 3);
        floodfill(Time[j]+XZero , YZero-AQuantity, WHITE);

        putpixel(Time[j]+XZero , YZero-CQuantity , RED );
        setfillstyle(SOLID_FILL, RED);
        circle(Time[j]+XZero , YZero-CQuantity, 3);
        floodfill(Time[j]+XZero , YZero-CQuantity, WHITE);
    }

    getch();
	closegraph();
    return 0;
}
