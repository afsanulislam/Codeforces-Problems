#include <iostream>
#include <vector>
#include<string>
#include<cctype>
using namespace std;

int main(){
    string s;
    vector<char> b,a, c,d;
    cin >> s;

    for (int i=0; i < s.length(); i++)
    {
        a.push_back(s[i]);
        if (a[i] >= 'a' && a[i] <= 'z')
            b.push_back(s[i]);
        else
            c.push_back(s[i]);
    }
    if(b.size()<c.size()){
       for(int j =0; j<s.length(); j++){
            d.push_back(toupper(s[j]));
        } 
    }
    else{
        for(int j =0; j<s.length(); j++){
            d.push_back(tolower(s[j]));
        }
    }
    for(int i=0; i<s.length(); i++){
        cout<<d[i];
    }
}