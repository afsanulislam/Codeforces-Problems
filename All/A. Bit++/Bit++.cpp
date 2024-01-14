#include<iostream>
using namespace std;

int main(){
    int i,n, x=0;
    string s;
    cin>>n;

    for(i=0; i<n; i++){
        cin>>s;

        if(s=="++X" || s=="X++")
        x=x+1;
        else if(s=="--X"||s=="X--")
        x=x-1;
    }
    cout<<x;
}