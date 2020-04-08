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
    int n;
    while(t--)
    {
        scanf("%d",&n);
        int ar[n+1];
        int br[n+1];
        int o=0, mo=0,z=0;
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
            if(ar[i] == 1) o++;
            else if(ar[i] == -1) mo++;
            else z++;
        }
        for(int i=0;i<n;i++){
            scanf("%d",&br[i]);
        }
        int check ;
        if(ar[0] == br[0]){
            check = 1;
        }
        else{
            check = 0;
        }

        if(check == 1){
            for(int i=n-1;i>0;i--){
                if(ar[i] == 1) o--;
                else if(ar[i] == -1) mo--;
                else z--;
                if(ar[i] < br[i]){
                    if(o<=0){
                        check = 0; break;
                    }
                }
                else if(ar[i] > br[i]){
                    if(mo <= 0){
                        check = 0; break;
                    }
                }
            }
        }
        if(check == 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
        }
    }
    return 0;
}


