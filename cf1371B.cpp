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
    ll n,r,ans,p,q;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld",&n,&r);
        if(n<=r){
            p = n-1;
            q = (p*(p+1))/2;
            ans = q+1;
        }
        else{
            ans = (r*(r+1))/2;
        }
        printf("%lld\n",ans);
    }

    return 0;
}
