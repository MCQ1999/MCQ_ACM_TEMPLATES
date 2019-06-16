#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
const ld pi=acos(-1);
const ll mod=1e9+7;
#define lowbit(x) (x&(-x))
const ld eps=1e-9;
const int maxn=1e5+10;
#define Accepted 0
ll gcd(ll a,ll b)
{
    return b?gcd(b,a%b):a;
}

signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(Accepted);
    cout.tie(Accepted);
    string s;
    cin>>s;
    int len=s.length();
    for(int i=0,j=len-1; i<j;)
    {
        if(s[i]==s[j])
        {
            i++;
            j--;
        }
        else
        {
            int f1=1,f2=1;
            int ii,jj;
            ii=i+1;
            jj=j;
            while(ii<jj)
            {
                if(s[ii]!=s[jj])
                {
                    f1=0;

                    break;
                }
                ii++;
                jj--;
            }
            ii=i;
            jj=j-1;
            while(ii<jj)
            {
                if(s[ii]!=s[jj])
                {
                    f2=0;

                    break;
                }
                ii++;
                jj--;
            }
            if(f1||f2)
            {
                cout<<"Yes"<<endl;
                return Accepted;
            }
            else
            {
                cout<<"No"<<endl;
                return Accepted;
            }
        }
    }

    cout<<"Yes"<<endl;
    return Accepted;
}
