#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--)
    {
        long long int n,x,f=0;
        cin>>n;
        map<long long int,long long int> m;
        vector<long long int> res,v;
        for(long long int i=0;i<n;i++)
        {
            cin>>x;
            m[x]++;
        }
        for(auto x:m)
        {
            if(x.second>2)
            {
                f=1;
                break;
            }
            v.push_back(x.first);
            
        }
        sort( v.begin(),v.end());
        if(f==1 ||m[v[v.size()-1]]==2)
        cout<<"-1"<<endl;
        else
        {
            for(int i=0;i<v.size();i++)
            {
                if(m[v[i]]==2)
                cout<<v[i]<<" ";
            }
            for(long long int i=v.size()-1;i>=0;i--)
            cout<<v[i]<<" ";
            cout<<endl;
        }
    }

    
	// your code goes here
	return 0;
}
