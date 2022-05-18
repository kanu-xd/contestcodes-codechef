#include<iostream>
using namespace std;
//#include <
void check(int a, int b, int c, int d, int e){
    if((a+b)<=d && c<=e)
    cout<<"yes";
    else if((c+b)<=d && a<=e)
    cout<<"yes";
    else if((a+c)<=d && b<=e)
    cout<<"yes";
    else 
    cout<<"no";
    cout<<endl;
    
}
int main()
{
    int n,a,b,c,d,e;
    //cout<<"hii";
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>a>>b>>c>>d>>e;
        check(a,b,c,d,e);

    }
    return 0;
}