#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n , l=0 , m=0;
    cin>>n;
    vector<int> p(n), a,b;
    for(int i=0 ; i<n; i++){
        cin>>p[i];
    }
    for(int k=0 ; k<n; k++){
        if(p[k]%2==0){
            a.push_back(p[k]);
            l++;
        }else{
            b.push_back(p[k]);
            m++;
        }
    }
    for(int s=0 ; s<l ; s++){
        cout<<a[s]<<" ";
    }
    cout<<endl;
    for(int o=0 ; o<m ; o++){
        cout<<b[o]<<" ";
    }
}