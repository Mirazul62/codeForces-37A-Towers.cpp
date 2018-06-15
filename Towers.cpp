#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,i,a[100000],count=1,ans=0,max=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        count++;
        else
        {
            ans++;
            if(count>max)
                max=count;
            count=1;
        }

    }
    cout<<max<<" "<<ans;
}
