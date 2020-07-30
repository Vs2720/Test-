#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
int t;
cin>>t;
while(t--)
{
    long long int n,chp=0,mp=0,a,b,fc=0,sc=0;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        fc=0;
        sc=0;
        while(a!=0)
        {
            fc=fc+(a%10);
            a=a/10;
        }
        while(b!=0)
        {
            sc=sc+(b%10);
            b=b/10;
        }
        if(fc==sc)
        {
            chp++;
            mp++;
        }
        else if(fc>sc)
        {
            chp++;
        }
        else
        {
            mp++;
        }

    }
    if(chp==mp)
        cout<<2<<" "<<chp;
    else if(chp>mp)
        cout<<0<<" "<<chp;
    else
        cout<<1<<" "<<mp;
    cout<<endl;

}
return 0;
}
