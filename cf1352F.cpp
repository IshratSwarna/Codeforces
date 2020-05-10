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
    int n0,n1,n2;
    string s,fs,ms,ls;
    while(t--)
    {
        scanf("%d%d%d",&n0,&n1,&n2);
        s = "";
        ms = ""; fs = ""; ls = "";
        if(n1>0){
            for(int i=0;i<=n1;i++){
                if(i%2 == 0)
                    ms = ms + "0";
                else
                    ms = ms + "1";
            }
        }
        if(n1%2 !=0){
            if(n1>0){
                for(int i=1;i<=n0;i++)
                    fs = fs + "0";
            }
            else{
                if(n0>0){
                    for(int i=0;i<=n0;i++)
                        fs = fs + "0";
                }
            }
            for(int i=1;i<=n2;i++)
                ls = ls + "1";
            s = fs + ms + ls;
            cout<<s<<"\n";
        }
        else{
            if(n1>0){
                for(int i=1;i<=n0;i++)
                    fs = fs + "0";
            }
            else{
                if(n0>0){
                    for(int i=0;i<=n0;i++)
                        fs = fs + "0";
                }
            }
            if(n2>0){
                string ns = "";
                int len = ms.size();
                for(int i=0;i<len-1;i++){
                    ns = ns + ms[i];
                }
                if(n1>0){
                    s = fs + ns ;
                    for(int i=1;i<=n2;i++)
                        s = s + "1";
                    s = s + "0";
                    cout<<s<<"\n";
                }
                else{
                    s = fs;
                    for(int i=0;i<=n2;i++)
                        s = s + "1";
                    cout<<s<<"\n";
                }
            }
            else{
                s = fs + ms;
                cout<<s<<"\n";
            }
        }
    }
    return 0;
}


