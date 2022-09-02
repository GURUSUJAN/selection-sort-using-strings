#include"iostream"
#include"string.h"
#include"bits/stdc++.h"
using namespace std;
int main()
{
    char ar[5][10];
    int n;
    cin>>n;
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    int j=0;
    char a[10];
    for(i=0;i<n-1;i++)
    {
        int la=0;
        la=i;
        strcpy(a,ar[i]);
        for(j=i+1;j<n;j++)
        {
            if(strcmp(a,ar[j])>0)
            {
                strcpy(a,ar[j]);
                la=j;
            }
        }
        if(la!=i)
        {
            char temp[10];
            strcpy(temp,ar[i]);
            strcpy(ar[i],ar[la]);
            strcpy(ar[la],temp);
        }
        int x=0;
        for(x=0;x<n;x++)
        {
            cout<<ar[x]<<" ";
        }
        cout<<endl;
    }
}
