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
    scanf("%d",&t);
    ll n,k;
    ll last,p,d;
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        last = 0;
        while(1){
            p = k/n;
            d = p - (last/n);
            if(d==0){
                break;
            }
            last = k;
            k += d;

        }
        printf("%lld\n",k);

    }
    return 0;
}
