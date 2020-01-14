#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;
int arr[200002];
int ans[200002];
int func(int m, int x , int d)
{
    if(m==x){
        d++;
        return ans[x] = d;
    }
    else{
        d++;
        return ans[x] = func(m,arr[x],d);
    }
}
int main()
{
    int T;
    scanf("%d",&T);
    int n;
    int val,x,xs,counter;
    while(T--)
    {
            scanf("%d",&n);
            for(int i=0;i<=200001;i++){
                arr[i] = 0;
                ans[i] = 0;
            }
            for(int i=1;i<=n;i++){
                 scanf("%d",&arr[i]);
            }
            for(int i=1;i<=n;i++){
                if(ans[i] == 0){
                    ans[i] = func(i , arr[i] , 0);
                }
            }
            for(int i=1;i<=n;i++){
                printf("%d ",ans[i]);
            }
            printf("\n");
    }
    return 0;
}


