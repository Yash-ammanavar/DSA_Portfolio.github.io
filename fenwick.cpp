#include<iostream>
#include<vector>

using namespace std;

void update(int x,int d,int n,int *BIT)
{
    for(;x<=n;x+=x&-x)
        BIT[x]+=d;
}

int query(int x,int *BIT)
{
    int sum=0;
    for(;x>0;x-=x&-x)
    {
        sum=sum+BIT[x];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;
    vector<int>d;
    int num;
    num=0;
    d.push_back(num);

    for(int i=0;i<n;i++)
    {
        cin>>num;
        d.push_back(num);
    }

    int BIT[n+1];

    for(int i=0;i<=n;i++)
    BIT[i]=0;

    for(int i=1;i<=n;i++)
    {
        update(i,d[i],n,BIT);
    }

    int q;
    cin>>q;

    int qu=query(q,BIT);
    cout<<qu;

    return 0;
}
