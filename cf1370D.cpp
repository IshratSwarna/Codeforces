#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;
int ar[200005];
bool isOddposs(int n, int M, int k)
{
    int co = 0;
    for(int i=0; i<n; i++){
        if((co%2 == 0) &&(ar[i] <= M)){
            co++;
        }
        else if(co%2 == 1){
            co++;
        }
    }
    if(co>=k)
        return true;
    else
        return false;
}
bool isEvenposs(int n, int M, int k)
{
    int co = 0;
    for(int i=0; i<n; i++){
        if((co%2 == 1) &&(ar[i] <= M)){
            co++;
        }
        else if(co%2 == 0){
            co++;
        }
    }
    if(co>=k)
        return true;
    else
        return false;
}
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int H =0;
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
        H = max(H,ar[i]);
    }
    int ans = H, L=1, M;
    while(L<=H){
        M = (L+H)/2;
        if(isOddposs(n,M,k) || isEvenposs(n,M,k)){
            H = M-1; ans = M;
        }
        else{
            L = M+1;
        }
    }
    printf("%d\n",ans);
    return 0;
}

