#include<bits/stdc++.h>
using namespace std;
using ll=long long;
void solve ( )
{
    int x;
    int cnt=0;
    cin>>x;
    while (x-->0)
    {
        cnt++;
        int n;
        cin>>n;
        vector<int>arr;
        for (int i=0; i<n; i++)
        {
            int ff;
            cin>>ff;
            arr.push_back(ff);
        }
        int hi=0,lo=0;
        for (int i=1; i<n; i++)
        {
            if (arr[i-1]==arr[i]){
               continue;
            }
            if (arr[i]<arr[i-1])
            {
                //cout<<arr[i]<<"\n";
                lo++;
            }
            else {//(arr[i]<arr[i-1]){
                hi++;
            }
        }
        cout<<"Case "<<cnt<<":"<<" "<<hi<<" "<<lo<<"\n";
    }
}

int main ( )
{
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    solve( );
    return 0;
}
