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
    string in,ans;
    int len;
    int ch;
    while(t--)
    {
        cin>>in;
        len = in.size();
        ans = "1";
        ans[0] = in[0];
        ch = 1;
        for(int i=1;i<len;i++){
            if(in[i]!=in[0]){
                ch=0;
            }
        }
        if(ch==1 || len==2){
            cout<<in<<"\n";
        }
        else{
            len = len*2;
            if(ans[0] == '0'){
                for(int i=1;i<len;i++){
                    if(i%2==1){
                        ans = ans + "1";
                    }
                    else{
                        ans = ans + "0";
                    }
                }
            }
            else if(ans[0] == '1'){
                for(int i=1;i<len;i++){
                    if(i%2==1){
                        ans = ans + "0";
                    }
                    else{
                        ans = ans + "1";
                    }
                }
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}

