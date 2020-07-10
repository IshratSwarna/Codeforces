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
    ll v,c,vl,cl;
    ll mn,mx,re;
    int ck;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%lld%lld%lld%lld",&v,&c,&vl,&cl);
        mn = min(v,c);
        mx = max(v,c);
        if(mn >= cl){
            ck = 1;
            re = mn - cl;
            if(mx >= vl){
                ck= 1;
            }
            else if(mx<vl){
                vl = vl - mx;
                if(re>=vl){
                    ck = 1;
                }
                else{
                    ck = 0;
                }
            }
        }
        else{
            ck = 0;
        }
        if(ck==0){
            printf("No\n");
        }
        else{
            printf("Yes\n");
        }
    }
    return 0;
}

