#include<iostream>
using namespace std;
 
int main(){
    int i,j=0,n;
    bool p[1000],v[1000],t[1000];
    cin>>n;
 
    for(i=0; i<n; i++){
        cin>>p[i]>>v[i]>>t[i];
        cout<<endl;
    }
 
    for(i=0; i<n; i++){
        if((p[i] && v[i])==1 || (p[i]&&t[i])==1 || (v[i]&&t[i])==1 ||(p[i]&&v[i]&&t[i])==1){
            j=j+1;
        }
    }
    cout<<j;
    
    return 0;
}