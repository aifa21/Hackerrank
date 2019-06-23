#include <bits/stdc++.h>
using namespace std;

int main() {

    stack<long int > s;
    int n,mm;
    long int x,elelm;
    cin>>n;

    while(n--)
        {
        cin>>mm;
        if(mm==1){

            cin>>x;

            if(s.empty()){

                s.push(x);
            }
            else{
                //cout<<s.top().first<<endl;
                elelm=max(x,s.top());
                //cout<<elelm<<endl;
                s.push(elelm);
            }
        }
        else if(mm==2){

           s.pop();

        }
        else{

            cout<<s.top()<<endl;
        }
    }

    return 0;
}
