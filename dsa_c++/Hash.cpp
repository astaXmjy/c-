#include<bits/stdc++.h>
using namespace std;
int freq[26];

int hasfunc(char c)
{
    return (c- 'a');
}

int countfre(string S)
{
    for (int i = 0; i < S.length(); i++)
    {
        int index=hasfunc(S[i]);
        freq[index]++;
    }
    
    for (int i = 0; i <26; i++)
    {
        cout<<(char)(i+'a')<<" "<<freq[i]<<endl;
    }
    
}

int main(int argc, char const *argv[])
{
    countfre("deeksha");
    return 0;
}
