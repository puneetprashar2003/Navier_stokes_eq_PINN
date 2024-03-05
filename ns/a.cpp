#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int tests,a,b,c;
    cin>>tests;
    while(tests--)
    {
    cin>>a>>b>>c;
    vector<int> vl1(c,0);
    vl1[0]=b;
   for(int i=2;i<=c;i++)
   {
    vl1[i-1]=vl1[i-2]-i+1;
   }
   if(vl1[c-1]<a)
   cout<<"-1"<<endl;
else
{reverse(vl1.begin(),vl1.end());
for(int i=0;i<c;i++)
{
    cout<<vl1[i]<<" ";
}
cout<<endl;
    }
    }
}