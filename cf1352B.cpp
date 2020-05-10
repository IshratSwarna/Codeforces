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
    ll s,re,p;
    while(t--)
    {
        scanf("%lld%lld",&n,&k);
        if(n%2 !=0){
            if(k%2 ==0){
                printf("NO\n");
            }
            else{
                if(k>n){
                    printf("NO\n");
                }
                else{
                printf("YES\n");
                s = 0;
                for(int i=1;i<k;i++){
                    printf("1 ");
                    s += 1;
                }
                re = n - s;
                printf("%lld\n",re);
                }
            }
        }
        else{
            if(k%2 == 0){
                if(k>n){
                    printf("NO\n");
                }
                else{
                    printf("YES\n");
                    s = 0;
                    for(int i=1;i<k;i++){
                        printf("1 ");
                        s += 1;
                    }
                    re = n - s;
                    printf("%lld\n",re);
                }
            }
            else{
                p = n/2;
                if(k<=p){
                    printf("YES\n");
                    s = 0;
                    for(int i=1;i<k;i++){
                        printf("2 ");
                        s += 2;
                    }
                    re = n - s;
                    printf("%lld\n",re);
                }
                else
                    printf("NO\n");
            }
        }
    }
    return 0;
}
