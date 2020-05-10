#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;
//map<int,int>mp;
int mp[8005];
int main()
{
    int t;
    scanf("%d",&t);
    int ans,sum,n;
    while(t--)
    {
        scanf("%d",&n);
        int ar[n+1];
        memset(mp,0,sizeof(mp));
        for(int i=0;i<n;i++)
        {
            scanf("%d",&ar[i]);
            mp[ar[i]]++;
        }
        ans =0; sum = 0;
        for(int i=0;i<n-1;i++)
        {
            sum = ar[i];
            for(int j=i+1;j<n;j++)
            {
                sum+=ar[j];
                if(sum <= 8005){
                    if(mp[sum] >0){
                        ans += mp[sum];
                        mp[sum] = 0;
                    }
                }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

