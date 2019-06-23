#include <bits/stdc++.h>

using namespace std;
long int dis[50001];
vector <long int> node[50001];

int pp;
void dfs(int u)
{

    //cout<<ar<<endl;
    int v;
    dis[u] = 1;
    for(int i = 0; i < node[u].size(); i++)
    {
        v = node[u][i];
        if(dis[v] == -1)
        {
            pp++;
            dfs(v);
        }

    }


}
int main()
{
   long int n,ar[50000]={0},m=-1,mn,mx;

    cin>>n;
    for(int i=0;i<n;i++)
    {
        memset(dis, -1 ,sizeof dis);
        int a, b;
          cin >> a >> b;

          node[a].push_back(b);
          node[b].push_back(a);

        if(ar[a]!=1)
            {ar[a]=1;
            }
        if(ar[b]!=1)
            {ar[b]=1;
            }
        if(a>m) {

                m=a;}
        if(b>m)
        {m=b;
        }
    }
    mn=60000;
    mx=-1;

    for(int i=1;i<=m;i++)
    {
        if(ar[i]==1)
        {
            if(dis[i]==-1)
            {
                pp=1;
                dfs(i);
                if(pp>mx)
                    mx=pp;
                if(pp<mn)
                    mn=pp;
            }
        }
    }
    cout<<mn<<" "<<mx<<endl;


return 0;
}
/*
6 4
1 2
1 3
3 4
5 6
1
*/
/*
10 4
2 3
4 5
4 8
5 8
1
*/
