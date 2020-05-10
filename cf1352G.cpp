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
    int n;
    int p;
    while(t--)
    {
        scanf("%d",&n);
        if(n<=3){
            printf("-1\n");
        }
        else{
            if(n%2 == 0){
                for(int i=2;i<=n;i+=2){
                    printf("%d ",i);
                }
                p = n-3; printf("%d ",p);
                p += 2; printf("%d ",p);
                p -= 4;
                if(p>0){
                    for(int i=p; i>=1; i-=2){
                        printf("%d ",i);
                    }
                }
                printf("\n");
            }
            else{
                for(int i=1;i<=n;i+=2){
                    printf("%d ",i);
                }
                p = n-3; printf("%d ",p);
                p += 2; printf("%d ",p);
                p -= 4;
                if(p>1){
                    for(int i=p; i>=2; i-=2){
                        printf("%d ",i);
                    }
                }
                printf("\n");
            }
        }
    }
    return 0;
}

