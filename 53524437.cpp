#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    int a,b,k,x,y,pp,dp;
    while(t--)
    {
        cin>>x>>y>>a>>b>>k;
        pp=x+(a*k);
        dp=y+(b*k);
        if(pp>dp)
        cout<<"diesel"<<endl;
        else if(dp>pp)
        cout<<"petrol"<<endl;
        else
        {
            cout<<"same price"<<endl;
        }
    }
	// your code goes here
	return 0;
}
