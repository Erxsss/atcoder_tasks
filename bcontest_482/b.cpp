#include <bits/stdc++.h>
using namespace std;

int main() {
    string s[5];
    for(int i=0;i<5; i++){
        cin>>s[i];
    } 
    int hariu=5;
    for(int i=0; i<5;i++){
        int cnt=0;
        for(int j=0;j<5; j++){
            if (s[i][j]=='.'){
                cnt++;    
            } 
        }
        hariu=min(hariu, cnt);
    }
    for(int j=0;j<5; j++){
        int cnt=0;
        for(int i=0; i<5; i++){
            if(s[i][j]=='.'){
                cnt++;
            } 
        }
        hariu=min(hariu, cnt);
    }
    int cnt1=0, cnt2=0;
    for(int i=0;i<5; i++){
        if(s[i][i]=='.'){
            cnt1++;
        }
        if(s[i][4-i]=='.'){
            cnt2++;
        }
    }
    hariu=min(hariu, min(cnt1,cnt2));
    cout<<hariu<<endl;
}