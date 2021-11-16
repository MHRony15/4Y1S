#include<bits/stdc++.h>
using namespace std;

int main(){
    ofstream fileout;
    ifstream filein;
    filein.open("input.txt");
    fileout.open("output.txt");
    int n,m,X0,a,c,i;
    double r;
    cout<<"Enter the number of Random Number: ";
    cin>>n;
    filein>>X0>>a>>c>>m;
    for(i=0;i<n;i++){
        X0=(a*X0+c)%m;
        r= (double) X0/m;
        fileout<<r<<" ";
    }

    fileout.close();
return 0;
}
