#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=2 ; i<=n; i++ ){
        int huv=0;
        for(int s=0 ; s<=i; s++){
            if(i%s==0){
                huv++;
            }
        }
        if(huv==2){
            cout<<i<<" ";
        }
    }
}