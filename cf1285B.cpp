#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lld",&n);
        ll ar[n+1];
        ll sum = 0;
        for(ll i=0;i<n;i++){
            scanf("%lld",&ar[i]);
            sum += ar[i];
        }
       // sort(ar,ar+n);
        ll sub = 0;
        int check = 1;
        ll m = 0;
        for(ll i=0 ; i<=n;i++){
            if(i==n){
                if(sub >=sum && m>0){
                    check = 0; sub = 0;
                }
            }
            else if(ar[i] >= 0)
                sub = sub + ar[i];
            else{
                if(sub >=sum){
                    check = 0; break;
                }
                sub += ar[i] ;
                if(sub<=0){
                    sub = 0;  m ++;
                }
            }
        }
        ll N = 0;
        for(ll i=0;i<n;i++){
            if(ar[i] < 0)
                N++;
        }
        if((n==2)&&(ar[0] == 0 && ar[1] == 0))
            printf("NO\n");
        else if(check == 0 && N>0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}
