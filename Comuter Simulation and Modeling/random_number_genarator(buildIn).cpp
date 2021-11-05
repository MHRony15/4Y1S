#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        fstream myfile;
        myfile.open("rbuild.txt");
        cout<<"Enter the sequence Number: ";
        cin>>n;
        srand(time(0));
        for(int i=0;i<n;i++){
            myfile<<rand()<<" ";
        }
        myfile.close();
        int a;
        while(myfile>> a){
            cout<<a<<" ";
        }

    return 0;
}

