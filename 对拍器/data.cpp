#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <fstream>
#include <algorithm>
#include <windows.h>
using namespace std;
//ofstream cout("data.in");
int g[105][105];
int main()
{
    srand(time(0));
//	srand( (unsigned)time( NULL ) );
    //freopen("input.txt","w",stdout);
    int n,m,k,a,b,c;
    n=rand()%20+1;
    m=rand()%10+1;
    //printf("%d %d\n",n,m);
    //printf("%d",t);
    printf("%d %d\n",n,m);
    //  printf("%d",rand()%100001);
    for(int i=0;i<n;i++)
    {
        printf("%d ",rand()%20+1);
    }
    printf("\n");
    for (int i=0; i<m; i++)
    {
        /*     if (rand()&1)	printf(" %d",rand());
             else	printf(" %d",-1*rand());*/
        int a=rand()%n+1,b=rand()%n+1,c=rand()%2;
        if(c==0)
            printf("%d %d %d\n",c,a,b);
        else
            printf("%d %d\n",c,a);
    }
    return 0;
}
