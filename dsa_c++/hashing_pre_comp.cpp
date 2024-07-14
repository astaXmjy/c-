#include<bits/stdc++.h>

using namespace std;
const int N=1e5+10;
int hsh[N][26];
int main(int argc, char const *argv[])
{  int t;
    cin>>t;

while (t--)
{     for (int i = 0; i < N; i++)
{
     for (int j = 0; j < 26; j++)
     {
        hsh[i][j]=0;
     }
     
}

    int n,q;
    cin>>n>>q;
    string s;
   for (int i = 0; i <=n; i++)
   {
        hsh[i+1][s[i]-'a']++;
   }
   for (int i = 0; i < 26; i++)
   {
     for (int j = 1; j <=n; j++)
     {
        hsh[j][i]+=hsh[j-1][i];
     }

   }
   
   
    cin>>s;
    while (q--)
    {
        int l,r;
        cin>>l>>r;

        int oddct=0;

        for (int i = 0; i < 26; i++)
        {
            int charct=hsh[r][i]-hsh[l-1][i];
            if (charct%2!=0)
            {
                oddct++;
            }
            
        }
        if (oddct>1) cout<<"NO\n";
        else cout<<"YES\n";

        
        
    }
    

}


    return 0;
}
