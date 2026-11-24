#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a , value , count=1;
    cin>>n;
    cin>>value;
    for(int i=1 ; i<n; i++){
        cin>>a;
        if(a==value){
            count++;
            continue;
        }
        if(i == count){
            for(int j=0 ; j<count ; j++){
                cout<<count-j<<" ";
            }
        }else{
            int half=(count+1)/2;
            for(int j=0 ; j<half; j++){
                cout<<j+1<<" ";
            }
            for(int j=count-half; j>=1 ; j--){
                cout<<j<<" ";
            }
        }
        count=1;
        value=a;
    }
    for(int j=1 ; j<=count ; j++){
        cout<<j<<" ";
    }
    
}