#include<iostream>
using namespace std;
 
int main(){
    unsigned int n,k,ar[50];
    int i,sum;
    cin>>n>>k;
    cout<<endl;
 
    for(i=0; i<n; i++){
        cin>>ar[i];
    }
    cout<<endl;
    sum=0;
 
    for(i=0; i<k && ar[i]!=0; i++){
        sum = sum+1;
    }
    for(i=k; i>=k && ar[i]!=0; i++){
        if(ar[k-1]==ar[i]){
            sum=sum+1;
        }
        else
        break;
    }
    cout<<endl<<sum;
}