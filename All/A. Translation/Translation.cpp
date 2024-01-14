#include<iostream>
#include<vector>
using namespace std;

int main(){
    string s,t;
    vector<char> a, b;
    int c=0;
    cin>>s>>t;

    for(int i=s.length()-1; i>=0; i--){
        a.push_back(s[i]);
    }
    for(int i=0; i<t.length(); i++){
        b.push_back(t[i]);
    }
    for(int i=0; i<s.length(); i++){
        if(a[i]==b[i]){
            c += 1;
        }
        else
        break;
    }
    if(c==s.length())
    cout<<"YES";
    
    else
    cout<<"NO";
}