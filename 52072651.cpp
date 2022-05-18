#include <iostream>
using namespace std;

int main() {
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1){
        cout<<1<<endl;
        continue;}
        long long ans=1;
        while(ans*2<=n)
        {
            ans*=2;
        }
        long long a= n-ans+1;
        if(ans==n)
        {
            cout<<(ans/2)<<endl;
            
        }
        else{
            cout<<max(a,ans/2)<<endl;
        }
    }
//	cout<<"GfG!";
	return 0;
}