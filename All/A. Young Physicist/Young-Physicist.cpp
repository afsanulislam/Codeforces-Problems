#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

int main(){
    int b, a[100][3], i, j, sumx=0, sumy=0, sumz =0;
    cin>>b;

    for(i=0; i<b; i++){
        for(j=0; j<3; j++){
            cin>>a[i][j];
        }
        cout<<endl;
    }
    for(i=0; i<3; i++){
        for(j=0; j<b; j++){
            if(i==0)
            sumx = sumx + a[j][i];
            else if(i==1)
            sumy = sumy + a[j][i];
            else if(i==2)
            sumz = sumz + a[j][i];
        }
    }
    if(sumx==0 && sumy==0 && sumz==0)
    cout<<"YES";
    else
    cout<<"NO";
}