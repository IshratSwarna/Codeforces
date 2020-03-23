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
    int n,a;
    int c,ti,put;
    int ln;
    while(t--)
    {
        scanf("%d",&n);
        ti = 0; put = 0;
        int ar[n+3];
        for(int i=1;i<=n;i++)
            ar[i] = 0;
        int mp[n+3];
        for(int i=0;i<=n;i++)
            mp[i] = 0;
        for(int j=1;j<=n;j++){
            scanf("%d",&ln);
            c=0;
            for(int i=0;i<ln;i++){
                scanf("%d",&a);
                if((c==0)&&(mp[a]==0)){
                    mp[a] ++;ar[j] = 1; c= 1;
                }
            }
            if(c==0)
                ti = j;
        }
        for(int i=1;i<=n;i++){
            if(mp[i] == 0){
                put = i; break;
            }
        }
        if((ti>0) && (put >0)){
            printf("IMPROVE\n");
            printf("%d %d\n",ti,put);
        }
        else{
            printf("OPTIMAL\n");
        }
    }
    return 0;
}
