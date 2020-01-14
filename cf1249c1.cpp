#include<bits/stdc++.h>
#define pb push_back
using namespace std;

vector<int>vec;

int main()
{
    int arr[11] = {1,3,9,27,81,243,729,2187,6561,19683};
    for(int i=0;i<10;i++){
        int v = arr[i];
        vec.pb(v);
        for(int i1=i+1; i1<10; i1++){
            int v1 = v+arr[i1];
            vec.pb(v1);
            for(int i2=i1+1;i2<10;i2++){
                int v2 = v1 + arr[i2];
                vec.pb(v2);
                for(int i3=i2+1;i3<10;i3++){
                    int v3 = v2 + arr[i3];
                    vec.pb(v3);
                    for(int i4=i3+1;i4<10;i4++){
                        int v4 = v3 + arr[i4];
                        vec.pb(v4);
                        for(int i5=i4+1;i5<10;i5++){
                            int v5 = v4 + arr[i5];
                            vec.pb(v5);
                            for(int i6=i5+1;i6<10;i6++){
                                int v6 = v5 + arr[i6];
                                vec.pb(v6);
                                for(int i7=i6+1;i7<10;i7++){
                                    int v7 = v6 + arr[i7];
                                    vec.pb(v7);
                                    for(int i8=i7+1;i8<10;i8++){
                                        int v8 = v7 + arr[i8];
                                        vec.pb(v8);
                                        for(int i9=i8+1;i9<10;i9++){
                                            int v9 = v8 + arr[i9];
                                            vec.pb(v9);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    sort(vec.begin(),vec.end());
    /*for(int i=0;i<vec.size();i++)
        cout<<vec[i]<<" ";*/
    int T;
    scanf("%d",&T);
    int n;
    int ans ;
    int lim = vec.size();
    while(T--){
        scanf("%d",&n);
        for(int i=0;i<lim ;i++){
            if(n<=vec[i]){
                ans = vec[i];
                break;
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}
