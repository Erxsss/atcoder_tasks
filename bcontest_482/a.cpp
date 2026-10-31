#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int sum=0;
    cin>>s;
    for(int i=0; i<s.length(); i++){
        if(s[i]=='o'){
            sum++;
        }
    }
    if(sum%2==0){
        cout<<"even";
    }else{
        cout<<"odd";
    }
}
