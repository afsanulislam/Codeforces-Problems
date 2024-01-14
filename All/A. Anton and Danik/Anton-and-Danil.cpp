#include<iostream>
using namespace std;

int main(){
    unsigned int a;
    string s;
    cin>>a>>s;
    int x=0,y=0;
    
    for(int i=0; i<a; i++){
        if(s[i]== 'A')
        x += 1;
        else if(s[i]=='D')
        y +=1;
    }
    if(x>y)
    cout<<"Anton";
    else if(y>x)
    cout<<"Danik";
    else
    cout<<"Friendship";
}