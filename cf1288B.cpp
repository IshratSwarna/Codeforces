#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    ll x,y;
    ll ans ,co;
    ll s ;
    int ch;
    ll cy;
    while(t--)
    {
        scanf("%lld%lld",&x,&y);
        ans = x;
        cy = y;
        ch = 0;
        if((y%10) < 9){
            ch = 1;
        }
        s = 0;
        co = 0;
        while(y>0){
            co++;
            s = y;
            y = y/10;

        }
        if(s<9)
            co--;
        else if(s==9 && ch==1){
            co--;
        }
        vector<ll>v;
        ll p=9;

        for(ll i=1;i<=co;i++){
            v.push_back(p);
            p = (p*10) + 9;
        }
        co = 0;
        p = v.size() ;


        for(ll i=0;i<p;i++){
            if(v[i]<=cy){
                co++;
            }
            else
                break;
        }
        ans = ans*co;
        printf("%lld\n",ans);
    }
    return 0;
}

