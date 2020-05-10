#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mkp make_pair
#define pii pair<int,int>
#define pi acos(-1.0)
using namespace std;
vector<int>Avec;
vector<int>Bvec;

int main()
{
    int t;
    scanf("%d",&t);
    int n;
    int ch,la,lb,i,j,mv;
    int lena,lenb,sa,sb,mc;
    while(t--)
    {
        scanf("%d",&n);
        int ar[n+1];
        for(int i=0;i<n;i++){
            scanf("%d",&ar[i]);
        }
        ch = 1;
        Avec.clear();
        Bvec.clear();
        la=0 ; lb = 0; i=0; j=n;
        la = ar[0];
        Avec.pb(ar[0]);
        mv = 1;
        char c = 'b';
        while(ch==1){
            if(c=='b'){
                lb = 0; mc=0;
                while(lb<=la){
                    if(j-i ==1){
                        ch=0; c= 'a'; break;
                    }
                    j--;Bvec.pb(ar[j]); lb += ar[j]; mc++;
                }
                if(mc>0){
                    mv++;
                }
                c = 'a';
            }
            else{
                la = 0; mc=0;
                while(la<=lb){
                    if(j-i == 1){
                        ch=0; c= 'b'; break;
                    }
                    i++;Avec.pb(ar[i]); la += ar[i];mc++;
                }
                if(mc>0){
                    mv++;
                }
                c = 'b';
            }
        }
        sa=0 ; sb = 0;
        lena = Avec.size() ;
        lenb = Bvec.size();
        for(int i=0;i<lena;i++){
            sa+= Avec[i];
        }
        for(int i=0;i<lenb;i++){
            sb += Bvec[i];
        }
        printf("%d %d %d\n",mv,sa,sb);
    }
    return 0;
}

