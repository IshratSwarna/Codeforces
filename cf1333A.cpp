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
    int n,m;
    while(t--)
    {
        scanf("%d%d",&n,&m);
        char mat[n+1][m+1];
        char ch = 'B'; int bl = 0; int wh = 0;
        for(int i=0;i<n;i++){
            if(i>0){
                if(mat[i-1][0]=='W')
                    ch = 'B';
                else
                    ch = 'W';
            }
            for(int j=0;j<m;j++){
                if(ch=='B'){
                    mat[i][j] = ch; bl++;
                    ch = 'W';
                }
                else{
                    mat[i][j] = ch; wh++;
                    ch = 'B';
                }
            }
        }
        int gap = bl - wh ;
        int work;
        if(gap == 0){
            work = 1;
        }
        else if(gap== 1){
            work = 0;
        }
        else if(gap<0){
            work = wh - bl +1;
        }
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                if(work<=0)
                    break;
                if(mat[i][j] == 'W'){
                    mat[i][j] = 'B'; work--;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<mat[i][j];
            }
            printf("\n");
        }
    }
    return 0;
}


