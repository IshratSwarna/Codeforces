#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
#define sorted(A) sort(A.begin(),A.end());
using namespace std;
vector<ll>vecA;
vector<ll>vecB;
vector<ll>vecS;
int main()
{
    ll n,k,t;
    int a,b,check;
    ll La,Lb,Ls;
    ll i,j,s,sum;
    scanf("%lld%lld",&n,&k);
    vecA.clear(); vecB.clear(); vecS.clear();
    Ls=0; La=0; Lb=0;
    while(n--){
        scanf("%lld%d%d",&t,&a,&b);
        if(a==1 && b==1){
            vecS.pb(t); Ls++;
        }
        else if(a==1){
            vecA.pb(t); La++;
        }
        else if(b==1){
            vecB.pb(t); Lb++;
        }
    }
    sorted(vecS);
    sorted(vecA);
    sorted(vecB);

    if((Ls >= k) || ( (La+Ls>=k) && (Lb+Ls>=k) )){
        check = 1;
    }
    else{
        check = 0;
    }
    if(check == 0){
        printf("-1\n");
    }
    else{
        i =0; j=0;s=0; sum=0;
        for(ll c=1;c<=k;c++){
            if((i<La) && (j<Lb) && (s<Ls)){
                if(vecA[i]+vecB[j] <= vecS[s]){
                    sum += vecA[i]+vecB[j];
                    i++; j++;
                }
                else{
                    sum += vecS[s];
                    s++;
                }
            }
            else{
                if(s<Ls){
                    sum += vecS[s];
                    s++;
                }
                else{
                    sum += vecA[i]+vecB[j];
                    i++; j++;
                }
            }
        }
        printf("%lld\n",sum);
    }
    return 0;
}
