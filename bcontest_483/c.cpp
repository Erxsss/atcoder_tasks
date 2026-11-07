#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, m;
    cin>>n>>m;
    vector<int> a(m), b(m) , s(n);
    fill(s.begin(),s.end(),0);
    for(int i=0 ; i<m; i++){
        cin>>a[i]>>b[i];
    }
    for(int num=1; num<=n ; num++){
        for(int c=0 ; c<m ; c++){
            if(a[c]!=num){
                s[num-1]++;
            }else{
                
            }
        }
    }
}