#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tests,a,b,c;
    cin>>tests;

    while(tests--)
    {
        cin>>a>>b;
        string s="";
        cin>>s;
       
        vector<char> vl1;
        vector<char> vl2;
        for(int i=0;i<a;i++)
        {  
           if(i%2==0)
           vl1.push_back(s[i]);
        else
        vl2.push_back(s[i]);

        }
        sort(vl1.begin(),vl1.end());
        sort(vl2.begin(),vl2.end());
        string str="";
        if(b%2==0)
        { 
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
        else
        {
            
            for(int i=0;i<a;i++)
            {   if(i<vl1.size()) 
                str=str+vl1[i];
                if(i<vl2.size())
                str=str+vl2[i];
               //cout<<str<<endl;
            }
            cout<<str<<endl;
        }
    }
}