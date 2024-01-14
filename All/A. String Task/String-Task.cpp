#include<iostream>
#include<vector>
#include<cctype>
#include<string>
using namespace std;
 
int main(){
    string s;
    vector<char> ch;
    cin>>s;
 
    for(int i=0; i<s.length(); i++){
        ch.push_back(tolower(s[i]));
    }
    for(int j=0; j<ch.size(); j++){
        if(ch[j] !='a'&& ch[j] !='e'&& ch[j] !='i'&& ch[j] !='o'&& ch[j] !='u'&& ch[j] !='y')
        cout<<'.'<<ch[j];
    }
}