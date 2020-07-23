#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;

int main()
{
    int t;
    ll l,r,m,a,b,c,re,p,q;
    int k;
    scanf("%d",&t);
    while(t--){
        scanf("%lld%lld%lld",&l,&r,&m);
        a=0; b=0; c=0;
        p = r-l;
        for(ll i=l;i<=r;i++){
            re = m%i;
            k=0;
            if((i-re) <=p){
                a = i;
                b = l; c = b + i -re; k=1; break;
            }
            if((re <= p) && (k==0)){
                a = i;
                b = l + re ; c = l; k=1; break;
            }
        }
        printf("%lld %lld %lld\n",a,b,c);
    }

    return 0;

}
