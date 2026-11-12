#include<iostream>
#include<vector>
#include<utility>
#include<map>
#include<set>
using namespace std ;

vector<int> f(200000), s(200000);
map<int, int> v[200001];
int main(){
    int  n , m;
    int a ,b ;
    cin>>n>>m;
    for(int i=0 ; i<m ; i++){
        cin>>a>>b;
        f[a]++;
        s[b]++;
        v[a][b]++;
    }
    set<pair<int,int>> q;
    for(int k=1 ; k<=n ; k++){
        q.insert(make_pair(f[k],-k));
    }
    for(int l=1 ; l<=n ; l++){
        int x=f[l];
        q.erase(make_pair(f[l],-l));
        for(auto& p : v[l]){
            q.erase(make_pair(f[p.first], -p.first));
            q.insert(make_pair(f[p.first+p.second] , -p.first));
        }
        cout<<-(int)q.begin()->second<<endl;
        q.insert(make_pair(f[l],-l));
        for(auto& y: v[l]){
            q.erase(make_pair(f[y.first+y.second] , -y.first));
            q.insert(make_pair(f[y.first], -y.first));
        }
    }
}