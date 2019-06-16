#include<bits/stdc++.h>
using namespace std;
#define inf 0x3f3f3f3f
#define ll long long
const int maxn=200005;
const int mod=1e9+7;
const double eps=1e-8;
const double PI = acos(-1.0);
#define lowbit(x) (x&(-x))
int main()
{
    std::ios::sync_with_stdio(false);
    string s;
    cin>>s;

        int l=s.length();
        int i=0,j=l-1,flag=0;
        while(i<j)
        {
            if(s[i]!=s[j])
            {
                if(s[i+1]==s[j])
                {
                    i++;
                    flag++;
                }
                else if(s[j-1]==s[i])
                {
                    j--;
                    flag++;
                }
                else
                {
                     flag=2;
                     break;
                }
            }
            else
            {
                i++,j--;
            }
        }
        if(flag<=1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;

    return 0;
}
