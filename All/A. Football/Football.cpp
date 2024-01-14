#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    string s;
    vector<char> ch;
    cin>>s;

    for(int i=0; i<s.length(); i++){
        ch.push_back(s[i]);
    }
    int a=0, b=0;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
            a=a+1;
        }
        else
        a=0;

        if(a==7)
        break;
    }
    for(int i=0; i<s.length(); i++){
        if(s[i]=='1'){
            b=b+1;
        }
        else
        b=0;

        if(b==7)
        break;
    }
    if(a==7 || b==7)
    cout<<"YES";
    else
    cout<<"NO";
}