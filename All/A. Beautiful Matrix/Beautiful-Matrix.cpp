#include<iostream>
using namespace std;

int main(){
    int i, j, m[5][5], n;

    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            cin>>m[i][j];
            if(m[i][j]==1){
                n=abs(i-2)+ abs(j-2);
            }

        }
        cout<<endl;
    }

    cout<<n;
}