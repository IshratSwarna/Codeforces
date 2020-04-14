#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;
map<ll,ll>mp;
map<ll,ll>mp2;
vector<ll>ar;
vector<ll>br;
int main()
{
    int t;
    scanf("%d",&t);
    ll n;
    ll a,km;
    ll l1,l2,ans;
    while(t--)
    {
        scanf("%lld",&n);
        ar.clear();
        br.clear();
        mp.clear();
        mp2.clear();
        ans = 0;
        for(ll i=0;i<n;i++){
            scanf("%lld",&a);
            if(mp[a] < 1){
                ar.pb(a);
                mp[a]++;
            }
            else{
                if(mp2[a] == 0){
                    br.pb(a);
                    mp2[a]++;
                }
                mp[a]++;
            }
        }

        l1 = ar.size();
        l2 = br.size();
        if(l2==0){
            if(n == 1)
                ans = 0;
            else
                ans = 1;
            printf("%lld\n",ans);
        }
        else{
            for(ll i=0;i<l2;i++){
                a = br[i];
                br[i] = mp[a] - 1;
            }
            sort(br.begin(),br.end());
            km = 0;
            for(ll i=0;i<l2;i++){
                if(br[i] >= l1){
                    km = l1 ; break;
                }
            }
            if(km == 0){
                km = br[l2-1];

                if(km+1 < l1){
                    km++;
                }
            }
            printf("%lld\n",km);
        }
    }
    return 0;
}

