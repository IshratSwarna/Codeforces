#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;
vector<ll>vec;
int main()
{
    ll n,k;
    scanf("%lld%lld",&n,&k);
    ll ar[n+1];

    for(int i=0;i<n;i++){
        scanf("%lld",&ar[i]);
    }
    ll minm = n - k +1;
    ll ans1 = (k*( (2*minm) + (k-1) ))/2;
    ll p =0;
    for(int i=0;i<n;i++){
        if(p>=k){
            break;
        }
        if(ar[i]>=minm){
            vec.pb(i);
            p++;
        }
    }
    ll a = 1;
    ll d ;
    ll q = vec.size();
    for(int i=1;i<q;i++){
        d = vec[i] - vec[i-1];
        if(d>0)
            a = (a*d)% 998244353;
    }
    ll ans2 = a % 998244353;
    printf("%lld %lld",ans1,ans2);
    return 0;
}

