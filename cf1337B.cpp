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
    int x,n,m;
    int p;
    while(t--)
    {
        scanf("%d%d%d",&x,&n,&m);
        p = m*10;
        while(1){
            if((x <= p) || (n<=0)){
                break;
            }
            x = (x/2) + 10;
            n--;
        }
        x = x-p;
        if(x<=0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}

