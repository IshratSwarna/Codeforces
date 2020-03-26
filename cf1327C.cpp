#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
using namespace std;

int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    int a,b;
    for(int p=0;p<k;p++){
        scanf("%d%d",&a,&b);
    }
    for(int p=0;p<k;p++){
        scanf("%d%d",&a,&b);
    }
    string ans = "";
    int co = 0;
    for(int i=1;i<n;i++){
        ans += "D"; co++;
    }
    for(int j=1;j<m;j++){
        ans += "R"; co++;
    }
    for(int j=1;j<=m;j++){
        for(int i=1;i<n;i++){
            if(j%2 == 0){
                ans += "D"; co++;
            }
            else{
                ans += "U"; co++;
            }
        }
        if(j<m){
            ans += "L"; co++;
        }
    }
    printf("%d\n",co);
    cout<<ans<<endl;
    return 0;
}


