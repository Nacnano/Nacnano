#include<bits/stdc++.h>
using namespace std;

int qs[1005][1005];

int main(){

    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            int x;
            scanf("%d",&x);
            qs[i][j]=qs[i-1][j]+qs[i][j-1]-qs[i-1][j-1]+x;
        }
    }

    int ans=0;
    for(int i=0;i+k<=n;i++)
    {
        for(int j=0;j+k<=m;j++)
        {
            ans=max(ans,qs[i+k][j+k]-qs[i][j+k]-qs[i+k][j]+qs[i][j]);
        }
    }
    printf("%d",ans);

}
