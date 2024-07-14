#include <bits/stdc++.h>
using namespace std;

bool canSum(int target, vector<int> num)
{
    vector<bool> ans(target + 1, false);
    ans[0] = true;
    for (int  i = 0; i <=ans.size(); i++)
    {
        if(ans[i]==true){
            for (int j = 0; j < num.size(); j++)
            {
                 ans[i+num[j]]=true;
            }

        }
    }
    return ans[target];

}
bool isValid(string word) {
        if(word.size()<3) return false;


        unordered_set<char> vow{'a','e','i','o','u'
        };
        unordered_set<char> con{'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s',
        't','v','w','x','y','z'};

        bool vows=false;
        bool cons=false;
        for(auto x:word){
            if(vow.count(x)!=0){
                cout<<"lele"<<endl;
               vows=true;
            }
            if(con.count(x)!=0) {
                cout<<"mc"<<endl;
                cons=true;
            }
            if(!(isalpha(x) || isdigit(x))){
                cout<<"madarchood"<<endl;
                return false;
            }
        }

      return  vows and cons;
    }

int main(int argc, char const *argv[])
{
    vector<int> num{
        5, 3, 4, 7};
        // cout<<canSum(6,num);
        isValid("AHI");
    return 0;
}
