#include <bits/stdc++.h>

using namespace std;

int main()
{
  long long int n,m,la=0,a;
  long long  int seq,sz;

   cin>>n>>m;

   vector<long long int>v[100000];
   vector<long long int>q;
for(int i=0;i<m;i++)
   {
      // int seq,sz;
    for(int j=0;j<3;j++)
    {
        cin>>a;
        q.push_back(a);
    }

    if(q[0]==1)
    {
        v[(q[1]^la)%n].push_back(q[2]);
    }
    else if(q[0]==2)
    {
        seq=(q[1]^la)%n;
        sz=v[seq].size();
        la=v[seq][q[2]%sz];
        cout<<v[seq][q[2]%sz]<<endl;
    }
    q.clear();

   }
    return 0;
}
