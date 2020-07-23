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
    int n,p,ans,i,q;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        int ar[n+1];
        for(i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        ans =0; p=1;

        for(i=n-1;i>0;i--){
            if(ar[i-1]>=ar[i]){
                p++;
            }
            else{
                p++;break;
            }
        }

        q = n-p;
        for(i=q;i>0;i--){
            if(ar[i-1]<= ar[i]){
                p++;
            }
            else
                break;
        }
        ans = n - p;
        printf("%d\n",ans);
    }
    return 0;
}

