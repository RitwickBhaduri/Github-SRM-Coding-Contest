#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long int n,m,a,x;
    cin>>n>>m>>a;
    if(a>n&&a>m)
        cout<<"1";
    else
    {
        if(n%a>0)
            n=(n/a)+1;
        else
            n=n/a;
        if(m%a>0)
            m=(m/a)+1;
        else
            m=m/a;
        x=m*n;
        cout<<x;
    }
    return 0;
}
