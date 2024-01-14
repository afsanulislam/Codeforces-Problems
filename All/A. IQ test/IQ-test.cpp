#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a, c=0, d=0,x,y;
    int b[100];
    cin>>a;

    for(int i=0; i<a; i++){
        cin>>b[i];
        cout<<" ";

        if(b[i]%2){
            x= i+1;
            c=c+1;
        }
        else{
            y= i+1;
            d=d+1;
        }
    }
    if(c==1)
    cout<<x;
    else if(d==1)
    cout<<y;
}