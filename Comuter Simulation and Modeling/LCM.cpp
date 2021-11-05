#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,X0,x,y,m,i=0,a,c;
    double R;
    fstream myfile;
    myfile.open("LCM.txt");
    cout<<"Enter the number of Random number: ";
    cin>>n;
    cout<<"Enter the seed:";
    cin>>X0;
    cout<<"Enter the multiplier:";
    cin>>a;
    cout<<"Enter the Increment:";
    cin>>c;
    cout<<"Enter the modulus(m):";
    cin>>m;
    while(i<n){
        X0=(a*X0+c)%m;
        R=(double) X0/m;
        myfile<<R<<" ";
        i++;
    }



    return 0;
}

