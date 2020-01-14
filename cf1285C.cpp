#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ll x;
    scanf("%lld",&x);
    ll lim = sqrt(x);
    ll p,q;
    for(ll i=lim;i>=1;i--){
        if(x%i == 0){
            p = x/i;
            if(p==1){
                q = x;
            }
            else if(p == x){
                q = 1;
            }
            else if(__gcd(p,i) == 1){
                q = i; break;
            }
        }
    }
    printf("%lld %lld",q,p);
    return 0;
}
