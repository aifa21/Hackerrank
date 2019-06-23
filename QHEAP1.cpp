#include <bits/stdc++.h>
using namespace std;


int main() {

    long long int t,m,x,y;

   // map<long long int,long long int>mp;

  //  map<long long int,long long int>::iterator it;

    set<long long int>mp;

    set<long long int>::iterator it;

    cin>>t;

    while(t--){

        cin>>x;

        if(x==1){

            cin>>y;
            //mp.insert(make_pair(y,y));//map
            mp.insert(y);//set
        }
        else if(x==2){

            cin>>y;
            mp.erase(y);
        }
        else{
            it = mp.begin();
          //  cout<<it->first<<endl;//map
           cout<<*it<<endl;//set
        }
    }
    return 0;
}
