#include<bits/stdc++.h>
using namespace std;

// vector<int> maxElementSlidingWindow(vector<int> nums,int k){
//          vector<int> ans;

//          deque<int> q;

//          int l=0,r=0;

//          while (r<nums.size())
//          {
//                 while(!q.empty() && nums[q[-1]]<nums[r]){
//                        q.pop_back();
//                 }
//                 q.push_back(r);

//                 if(l>q[0]){
//                     q.pop_front();
//                 }
//                 if(r+1>=k){
//                     ans.push_back(nums[q[0]]);
//                     l++;
//                 }
//                 r++;
//          }

//          return ans;

// }

// int maXF(vector<int>nums ,int k){
//     sort(nums.begin(),nums.end());
//     int ans=0;
//     int total=0;
//     int l=0,r=0;

//     while(r<nums.size()){

//         total+=nums[r];

//         while(nums[r]*(r-l+1)>total+k){
//             total-=nums[l];
//             l++;
//         }

//         ans=max(ans,r-l+1);
//         r++;

//     }

//     return ans;

// }
// int min(string s){
//     int n=s.size();
//      int l=0;
//      s=s+s;
//      string s1="",s2="";
//      for(int i=0;i<s.size();i++){
//         if(i%2==0){
//              s1+="0";
//              s2+="1";
//         }
//         else{
//             s1+="1";
//             s2+="0";
//         }
//      }
//      int res=s.size();
//      int dif1=0,dif2=0;

//      for (int i = 0; i < s.size(); i++)
//      {
//         if(s[i]!=s1[i])  dif1++;
//         if(s[i]!=s2[i]) dif2++;

//         if(i-l+1>n){
//              if(s[i]!=s1[i])  dif1--;
//               if(s[i]!=s2[i]) dif2--;
//               l++;
//         }
//         if(i-l+1==n){
//             res=min(res,dif1,dif2);
//         }
//      }


//      return res;

// }

// bool permContain(string s1,string s2){
//     if(s1.size()>s2.size())  return false;
//     int k=s2.size();
//     int l=0;
//      vector<int> s1Count{26,0},s2Count{26,0};

//     for(int i=0;i<s1.size();i++){
//          s1Count[s1[i]-'a']+=1;
//          s2Count[s2[i]-'a']+=1;
//     }

//     int matches=0;

//     for(int i=0;i<26;i++){
//         if(s1Count[i]==s2Count[i]) matches+=1;

//     }
//     for(int i=s1.size();i<s2.size();i++){
//         if(matches==26) return true;

//         int index=s2[i]-'a';
//         s2Count[index]+=1;
//         if(s1Count[index]==s2Count[index]) matches+=1;

//         else if(s1Count[index]+1==s2Count[index]) matches-=1;

//         index=s2[l]-'a';
//         s2Count[index]-=1;

//         if(s1Count[index]==s2Count[index]) matches+=1;

//         else if(s1Count[index]-1==s2Count[index]) matches-=1;

//         l++;

//     }

//     return matches==26;
// }

void possibleSubsets(char A[], int N)
    {
        for(int i = 0;i < (1 << N); ++i)
        {
            for(int j = 0;j < N;++j)
                if(i & (1 << j))
                    cout << A[j] <<' ';
            cout << endl;
    }
    }      3 3 2 3


int main(int argc, char const *argv[])
{
    // char arr[]={'a','b','c'};

    // possibleSubsets(arr,3);
    cout<<(5&6&7)<<endl;
    return 0;
}

// |1 2 3| 4------>3
// 1 |2 3 4|------>4