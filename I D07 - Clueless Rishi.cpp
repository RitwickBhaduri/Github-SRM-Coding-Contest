#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    string s;
    int i=0,o=0;
    cin>>s;
    int l=s.size();
    for(i=0;i<l;i++)
    {
        if(s[i]=='1')
            o++;
        else
        {
            cout<<o;
            o=0;
        }
    }
    cout<<o;
    return 0;
}
