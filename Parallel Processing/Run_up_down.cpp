#include<bits/stdc++.h>
using namespace std;

int main(){
    double N;
    cout<<"Number of Sample: ";
    cin>>N;
    ofstream file;
    file.open("up_down_run.txt");

    int val1, val2, Run, Range, upflag;
    upflag = 0;
    Range = 100;
    Run = 0;
    val1 = rand()%Range;
    file<<val1<<" ";

    for(int i=1;i<N;i++){
        val2 = rand()%Range;
        file<<val2<<" ";

        if(val2>val1 && upflag == 0){
            Run++;
            upflag = 1;
        }
        if(val2<val1 && upflag == 1){
            Run++;
            upflag = 0;
        }
        val1 = val2;
    }

    double Mean, SD, Randomness, Z;
    Mean = (2*N-1)/3;
    SD = sqrt((16*N-29)/90);
    Randomness = (Run-Mean)/SD;
    cout<<"Acceptance Region Z: ";
    cin>>Z;

    if(Randomness>-Z && Randomness<Z)cout<<"Randomness is Accepted!"<<endl;
    else cout<<"Randomness is Rejected!"<<endl;
    file.close();
    return 0;
}

