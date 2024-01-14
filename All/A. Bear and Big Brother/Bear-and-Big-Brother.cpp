#include<iostream>
using namespace std;
 
int main(){
    int a,b,c=0;
    cin>>a>>b;
    for(int i=0; i<10; i++){
        a= a*3;
        b= b*2;
        c= c+1;
        if(a>b){
            cout<<c;
            break;
        }
    }
}