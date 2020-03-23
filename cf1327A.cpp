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
    ll n,k;
    ll an,Sn;
    ll p;
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        if((k==1) && (n%2 > 0))
            printf("YES\n");
        else{
            k--;
            an = 1 + ((k-1)*2);
            Sn = (k*(1+an))/2;
            p = n-Sn;
            if((p>an) && (p%2 >0))
                printf("YES\n");
            else
                printf("NO\n");
        }
    }
    return 0;
}

