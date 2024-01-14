#include<iostream>
#include<string>
#include<cctype>
using namespace std;

int main(){
    int i,j;
    string a,b;
    cin>>a>>b;

    for(i=0; i<a.length(); i++){
        char c=toupper(a[i]), d=toupper(b[i]);
        if(c>d){
            j=1;
            break;
        }
        else if(c<d){
            j=-1;
            break;
        }
        else j=0;
    }
    cout<<j;
}