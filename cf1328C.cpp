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
    string ans;
    int n;
    while(t--){
        scanf("%d",&n);
        cin>>ans;
        string s1,s2;
        s1 = "1";
        s2 = "1";
        int check = 0;
        for(int i=1;i<n;i++){
            if(ans[i]=='2'){
                if(check==1){
                    s1 += "0"; s2 += "2";
                }
                else{
                    s1 += "1"; s2+= "1";
                }
            }
            else if(ans[i] == '1'){
                if(check==1){
                    s1 += "0"; s2 += "1";
                }
                else{
                    s1 += "1" ; s2 += "0" ; check = 1;
                }
            }
            else{
                s1 += "0" ; s2 += "0";
            }
        }
        cout<<s1<<"\n";
        cout<<s2<<"\n";

    }
    return 0;
}
