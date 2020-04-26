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
    ll n;
    ll sum,a,d,re;
    while(t--)
    {
        scanf("%lld",&n);
        ll ar[n+1];
        ll p = n/2;
        if(p%2 == 1){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            sum = 0;
            a = 2;
            for(ll i=0;i<p;i++){
                ar[i] = a; sum+=a; a+=2;
            }
            a = 1;
            d=0;
            for(ll i=p;i<n-1;i++){
                ar[i] = a; d+=a; a+=2;
            }
            re = sum - d;
            ar[n-1] = re;
            for(ll i=0;i<n;i++){
                printf("%lld ",ar[i]);
            }
            printf("\n");
        }

    }
    return 0;
}

