/*cho mảng A[] gồm n phần tử.Nhiệm vụ của bạn là hãy sắp đặt lại các phần tử của mảng sao cho A[i]=i,
nếu phần tử A[j] có giá trị khác j,hãy đưa vào -1.*/

#include<iostream>
#include<map>
using namespace std;

using ll = long long;

int main(){
    int Tc; cin>>Tc;
    while(Tc--){
        int n; cin>>n;
        map<ll, bool> mp;
        for(int i=0;i<n;i++){
            ll x; cin>>x;
            mp[x] = true;
        }
        for(int i=0;i<n;i++){
            if(mp.count(i)){
                cout<<i<<" ";
            }
            else cout<<"-1 ";
        }
        cout<<endl;
    }
    return 0;
}