#include <iostream>
using namespace std;

int solve(int k,int n, int w){
    int dollars = ((k*w*(w+1))/2) - n;
    return dollars>0 ? dollars:0;
}

int main()
{
    int k,n,w;
    cin>>k>>n>>w;
    cout<<solve(k,n,w)<<endl;
}