#include<bits/stdc++.h>
using namespace std;

int main(){
        int n;
        fstream myfile;
        myfile.open("rbuild.txt");
        cout<<"Enter the sequence Number: ";
        cin>>n;
        for(int i=0;i<n;i++){
            myfile<<rand()%100<<" ";
        }
        myfile.close();


    return 0;
}

