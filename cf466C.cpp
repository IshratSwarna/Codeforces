#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll n;
    scanf("%lld",&n);
    ll ar[n+1];
    ll sum=0;
    for(ll i=0;i<n;i++){
        scanf("%lld",&ar[i]);
        sum += ar[i];
    }
    if(sum%3 != 0){
        printf("0\n"); return 0;
    }
    ll ps = 0;
    ll x = sum/3;
    ll dx = 2*x;
    ll ans = 0;
    ll x_count = 0;
    for(ll i=0;i<n-1;i++){
        ps += ar[i] ;
        if(ps == dx){
            ans += x_count ;
        }
        if(ps == x){
            x_count++;
        }
    }

    printf("%lld\n",ans);
    return 0;
}
