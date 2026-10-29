#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; 
    cin>>n;
    for(int t=0 ; t<n; t++){
        int num,hariu=0;
        cin>>num;
        for(int i=1 ; i*i<=num; i++){
            if(num%i==0){
                hariu++;
                if(i*i!=num) hariu++;
        }
    }
    cout<<hariu<<endl;
    }
}