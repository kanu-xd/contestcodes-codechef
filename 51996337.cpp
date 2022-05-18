#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {
	int t,a,b,c,d,ans;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c>>d;
	   
	      if(a+b+c <=d)
	      cout<<1<<endl;
	   else if(a+b <=d)
	   cout<<2<<endl;
	   else
	   cout<<3<<endl;
	  
	}
	
	return 0;



	


	// Your code here
//	return 0;
}