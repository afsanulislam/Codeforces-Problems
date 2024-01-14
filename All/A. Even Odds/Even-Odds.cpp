#include<iostream>
#include<cmath>
using namespace std;

int main(){
    unsigned long long int a, b;
    cin>>a>>b;
    unsigned long long c= ceil(a/2.0);

    if(b<= c){
        cout<<(2*b)-1;
    }
    else{
        cout<< (b- c) * 2;
    }
}