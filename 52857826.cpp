#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long x,k,n,min=0,max=0;
        
        cin>>x>>k;
    
        if(x*2<=x*k)
        { 

         min=x*2; 

        } 

        else if(x%2!=0){ 

            min=x*(x+1); 

        } 

else{ 

    min=x*(x+2); 

  } 
  
        max= (x*k)*((x*k)-1);
        cout<<min<<" "<<max<<endl;
        
    }
	// your code goes here
	return 0;
}
