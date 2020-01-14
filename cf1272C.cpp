#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;

map<char,int>mp;
int main()
{
    ll n,k;
    scanf("%lld%lld",&n,&k);
    string s;
    cin>>s;
    char ch;
    mp.clear();
    for(ll i=0;i<k;i++){
        scanf(" %c",&ch);
        mp[ch] = 2;
    }
    ll co = 0;
    ll ans = 0;
    ll ml = 0;
    ll p;
    for(ll i=0;i<n;i++){
        ch = s[i];
        if(mp[ch] == 2){
            co++;
        }
        else{
            if(co%2 == 0){
                p = co/2;
                ml = p * (co+1);
            }
            else{
                p = (co+1)/2;
                ml = p*co;
            }
            ans += ml;
            co = 0;
        }
    }
    if(co>0){
        if(co%2 == 0){
                p = co/2;
                ml = p * (co+1);
            }
        else{
            p = (co+1)/2;
            ml = p*co;
        }
        ans += ml;
        co = 0;
    }
    printf("%lld",ans);
    return 0;
}
