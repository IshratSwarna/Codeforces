#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;

int main()
{
    int t;
    ll m,a;
    ll mid;
    scanf("%d",&t);
    while(t--){
        scanf("%lld",&m);
        ll ar[m+1];
        for(ll i=0;i<m;i++){
            scanf("%lld",&ar[i]);
        }
        sort(ar,ar+m);
        ll i,j;
        if(m%2 == 1){
            mid = m/2;
            printf("%lld ",ar[mid]);
            i = mid-1;
            j = mid+1;
        }
        else{
            mid = m/2 - 1;
            i = mid;
            j = mid+1;
        }
        while(i>=0){
            printf("%lld %lld ",ar[i],ar[j]);
            i--;
            j++;
        }
        printf("\n");
    }
    return 0;
}
