#include<bits/stdc++.h>
using namespace std;
    int deeksha(string dee){
        int deek=0;
        for(char deeku: dee)
        {

                deek=deek*10+(deeku-'0');

        }

        return deek;
    }

    string multiply(string num1, string num2) {
        int deeksha_tu_bahut_pyaari_h=deeksha(num1);
        int deeksha_tu_pari_h=deeksha(num2);

        int deekuop=deeksha_tu_bahut_pyaari_h*deeksha_tu_pari_h;
        return to_string(deekuop);


    }



    int maxArea(vector<int>& height) {
        int max_water=INT_MIN;
        int l=0,r=height.size();
        while(l<r)
        {
            int temp_height=min(height[l],height[r-1]);
            max_water=max(max_water,temp_height*r);
            if(height[l]<height[r-1]) l++;
            else{
                r--;
            }
        }

        return max_water;

    }



    int main(int argc, char const *argv[])
    {
        // cout<<multiply("2","3");
        // string prefix="flowers";
        // string s="flower";
        //  prefix=prefix.substr(0,prefix.length()-1);
        // cout<<prefix<<endl;
        // cout<<s.find(prefix);
        // vector<int> height={1,8,6,2,5,4,8,3,7};
        // cout<<maxArea(height);

        string luffy;
        luffy=luffy+'Z';
        cout<<luffy;

        return 0;
    }
    