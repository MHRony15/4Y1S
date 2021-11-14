#include<bits/stdc++.h>
using namespace std;

int main(){
    double N;
    cout<<"Number of Sample: ";
    cin>>N;
    ofstream file;
    file.open("run_above_below.txt");

    double Average, Run, n1, n2;
    int aboveflag, val1, val2, Range;
    Range = 100;
    aboveflag = 0;
    Average = (Range - 1)/2;
    Run = 0;
    n1 = 0;
    n2 = 0;

    val1 = rand()%Range;
    file<<val1<<" ";
    if(val1>Average)n1++;
    else n2++;

    for(int i=1;i<N;i++){
        val2 = rand()%Range;
        file<<val2<<" ";
        if(val2>Average)n1++;
        else n2++;

        if(val2>val1 && aboveflag == 0){
            Run++;
            aboveflag = 1;
        }
        if(val2<val1 && aboveflag == 1){
            Run++;
            aboveflag = 0;
        }
        val1 = val2;
    }

    double Mean, SD, Randomness, Z;
    Mean = (2*n1*n2/N) + 1/2;
    SD = sqrt(2*n1*n2*(2*n1*n2-N)/(N*N*(N-1)));
    Randomness = (Run-Mean)/SD;
    cout<<"Acceptance Region Z: ";
    cin>>Z;

    if(Randomness>-Z && Randomness<Z)cout<<"Randomness is Accepted!"<<endl;
    else cout<<"Randomness is Rejected!"<<endl;
    file.close();
    return 0;
}


