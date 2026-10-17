#include<iostream>
using namespace std;

int main(){
    string firstR , secondR ;
    cin>>firstR>>secondR;
    if(firstR == "AD"||firstR == "DA"||secondR =="AD"||secondR == "DA"){
        cout<<"Yes";
    }
    else if(firstR[0]=='A' && secondR[0]=='D'){
        cout<<"Yes";
    }
    else if(firstR[1]=='A' && secondR[1]=='D'){
        cout<<"Yes";
    }
    else if(firstR[0]=='D' && secondR[0]=='A'){
        cout<<"Yes";
    }
    else if(firstR[1]=='D' && secondR[1]=='A'){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}